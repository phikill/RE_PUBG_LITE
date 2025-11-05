/* display_manager.c : for linux 
2023-2024 SILD Team
2025 - OGBattlegrouds
*/


#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
#include<string.h>

#include<X11/Xlib.h>
#include<X11/Xutil.h>
#include<X11/Xatom.h>
#include<X11/cursorfont.h>

#include"display_manager.h"

LE_Display* windows[MAX_WINDOWS];
LE_Display *currentWindow = NULL;
int windowCount = 0;


LE_Display* engineCreateDisplay(const char *title, int width, int height)
{
    LE_Display *window = (LE_Display*)malloc(sizeof(LE_Display));

    Display             *display;
    Window               root;
    XSetWindowAttributes attributes;
    int                  screen;
    XColor               color;
    Colormap             colormap;
    int                  screenWidth,
                         screenHeight;


    if(!window) 
    {
        fprintf(stderr, "Error: Could not allocate memory for window structure.\n");
        return NULL;
    }

    if (windowCount >= MAX_WINDOWS) 
    {
        printf(" \n ~~[ ALERT! ]: Maximum number of windows reached! Window Limit =  %d \n", windowCount);
        return NULL;
    }

    window->width = width;
    window->height = height;

    /* Open the connection to the X server */
    display = XOpenDisplay(NULL);
    if (display == NULL) 
    {
        printf("\n ~~[ERROR!]: Cannot connect to X server\n\n");
        free(window);
        return NULL;
    }

    screen = DefaultScreen(display);
    root = RootWindow(display, screen);

    colormap = DefaultColormap(display, screen);

    /* Sets the background color */
    if(!XParseColor(display, colormap, "#000700", &color)) 
    {
        fprintf(stderr, "Error parsing color.\n");
        XCloseDisplay(display);
        free(window);
        return NULL;
    }

    if(!XAllocColor(display, colormap, &color)) 
    {
        fprintf(stderr, "Error allocating color.\n");
        XCloseDisplay(display);
        free(window);
        return NULL;
    }


    /* Window Settings */
    attributes.background_pixel = color.pixel;
    attributes.border_pixel = WhitePixel(display, screen);
    attributes.override_redirect = False;  /* Allows the window manager to control */
    
    //attributes.event_mask = ExposureMask | KeyPressMask;
    attributes.event_mask = ExposureMask | KeyPressMask | FocusChangeMask |
                            StructureNotifyMask | ButtonPressMask | ButtonReleaseMask |
                            PointerMotionMask;

    /* Adjusting the window position (centering on the screen) */
    screenWidth = DisplayWidth(display, screen);
    screenHeight = DisplayHeight(display, screen);
    window->windowPosX = (screenWidth - width) / 2;
    window->windowPosY = (screenHeight - height) / 2;

    /* Create Window */
    window->platformHandle = (void *)XCreateWindow(display,
                                                   root,
                                                   window->windowPosX,
                                                   window->windowPosY,
                                                   width,
                                                   height,
                                                   0,
                                                   CopyFromParent,
                                                   InputOutput,
                                                   CopyFromParent,
                                                   CWBackPixel | CWBorderPixel | CWEventMask,
                                                   &attributes);

    if(!window->platformHandle) 
    {
        fprintf(stderr, "Error: Could not create X window.\n");
        XCloseDisplay(display);
        free(window);
        return NULL;
    }

    /* Sets the window title */
    XStoreName(display, (Window)window->platformHandle, title);
    XMapWindow(display, (Window)window->platformHandle);
    XFlush(display);

    /* Saves the Display within the structure, in case you need it in the future */
    window->platformConnection = (void *)display;

    windows[windowCount++] = window;
    currentWindow = window;
    return window;
}

void engineDeleteDisplay(LE_Display *window) /* FIXME - Dont Work , destroy first window Only !*/ 
{                                             /* i hate this ! AAAA**/
    Display *display;

    display = (Display *)window->platformConnection;

    if(window) 
    {
        if(window->platformHandle) 
        {
            XDestroyWindow(display, (Window)window->platformHandle);
        }
        free(window);
    }
    else 
    {
        fprintf(stderr, "Warning: Attempted to delete a null window.\n");
    }
}

void getWindowActiveStatus(LE_Display *window) 
{
    Display *display;
    Window focusedWindow;
    int revert;

    /* Open a connection to the X server */
    display = XOpenDisplay(NULL);
    if (display == NULL) 
    {
        /* Failed to open connection to server X */
        window->windowActiveStatus = 0;
        return;
    }

    /* Gets the currently focused window */
    XGetInputFocus(display, &focusedWindow, &revert);

    /* Checks if the current window has focus */
    window->windowActiveStatus = (focusedWindow == (Window)window->platformHandle) ? 1 : 0;

    /* Closes the connection to the X server */
    XCloseDisplay(display);
}

int engineSetLoop(LE_Display *window, int *loopVar, void (*renderFunction)())
{
    Display *display;
    XEvent event;

    display = (Display *)window->platformConnection;

    if(renderFunction == NULL) 
    {
        printf("\n ~~[ERROR!]: [engineSetLoop()] Parameter 3 is NULL!\n");
        return -1;
    }


    for(;;)
    {
        if(XPending(display) > 0)
        {
            XNextEvent(display, &event);
        }
        else
        {
            renderFunction();
        }

        if(*loopVar == 0)
        {
            break;
        }
    }

    XDestroyWindow(display, (Window)window->platformHandle);
    XCloseDisplay(display);

    return 0;
}

void setWindowSize(LE_Display *window, int width, int height) 
{
    Display *display;
    Screen *screen;
    int screenWidth, screenHeight;

    /* Open a connection to the X server */
    display = XOpenDisplay(NULL);
    if(display == NULL) 
    {
        /* Failed to open connection to server X */
        return;
    }

    /* Gets the default screen and its dimensions */
    screen = DefaultScreenOfDisplay(display);
    screenWidth = screen->width;
    screenHeight = screen->height;

    /* Updates the width and height values in the window structure */
    window->width = width;
    window->height = height;

    /* Centers the window on the screen */
    window->windowPosX = (screenWidth - window->width) / 2;
    window->windowPosY = (screenHeight - window->height) / 2;

    if(window && window->platformHandle) 
    {
        /* Move and resize the window */
        XMoveResizeWindow(display, (Window)window->platformHandle, 
                          window->windowPosX, window->windowPosY, 
                          width, height);
    }

    /* Updates the display */
    XFlush(display);

    /* Closes the connection to the X server */
    XCloseDisplay(display);
}

void getWindowSize(LE_Display *window, int *width, int *height) 
{
    Display *display;
    Window win;
    XWindowAttributes attributes;

    /* Gets the display and window from the LE_Display structure */
    display = (Display *)window->platformConnection;
    win = (Window)window->platformHandle;

    /* Gets the window attributes */
    if(XGetWindowAttributes(display, win, &attributes)) 
    {
        *width = attributes.width;
        *height = attributes.height;
    } 
    else 
    {
        printf("Error: Could not get window attributes.\n");
        *width = 0;
        *height = 0;
    }
}

void setWindowCentered(LE_Display *display)
{
    Display *dpy = (Display *)display->platformConnection;
    Window win   = (Window)display->platformHandle;
    Screen *screen;
    int screenWidth, screenHeight;
    int posX, posY;

    if (!dpy || !win)
        return;

    screen = DefaultScreenOfDisplay(dpy);
    screenWidth  = screen->width;
    screenHeight = screen->height;

    posX = (screenWidth  - display->width)  / 2;
    posY = (screenHeight - display->height) / 2;

    XMoveWindow(dpy, win, posX, posY);
    XFlush(dpy);

    display->windowPosX = posX;
    display->windowPosY = posY;
}

void engineSetWindowTitle(LE_Display *window, const char *format, ...) 
{
    Display *display;  /* Gets the Display from the rendering context */
    Window win = (Window)window->platformHandle; /* Gets the window from the handle */

    display = (Display *)window->platformConnection;

    char title[256]; /* window title buffer */
    va_list args;

    /* Initialize the argument list */
    va_start(args, format); 
    
    /* Format the title */
    vsnprintf(title, sizeof(title), format, args);

    /* Finalizes the argument list */
    va_end(args);

    /* Sets the window title */
    XStoreName(display, win, title);

    /* Requests the X server to update the screen */
    XFlush(display);
}

void engineSetWindowIcon(LE_Display *window, const char* iconPath)
{
    /* ??? x11 doesn't have a default icon system other than xpm so I'll leave it empty for now */
}


void windowBorderless(LE_Display *display, int mode, ...)
{
    Display *dpy = (Display *)display->platformConnection;
    Window win   = (Window)display->platformHandle;

    int windowWidth = display->width;
    int windowHeight = display->height;

    va_list args;
    va_start(args, mode);

    if (mode == 2)
    {
        Screen *screen = DefaultScreenOfDisplay(dpy);
        windowWidth  = screen->width;
        windowHeight = screen->height;
    }
    else if (mode == 1)
    {
        windowWidth  = va_arg(args, int);
        windowHeight = va_arg(args, int);
    }

    va_end(args);

    if (mode == 0)
    {
        // Re-add borders: depends on Window Manager, so it is limited
        // You can just try to "uncheck" the remove decorations hint
        Atom wm_hints = XInternAtom(dpy, "_MOTIF_WM_HINTS", False);
        long hints[5] = {2, 0, 0, 0, 0}; // without flags = with borders
        XChangeProperty(dpy, win, wm_hints, wm_hints, 32, PropModeReplace, (unsigned char*)hints, 5);
    }
    else
    {
        // Remove the edges
        Atom wm_hints = XInternAtom(dpy, "_MOTIF_WM_HINTS", False);
        long hints[5] = {2, 0, 0, 0, 0}; // flags = 2, functions = 0 (no decorations)
        XChangeProperty(dpy, win, wm_hints, wm_hints, 32, PropModeReplace, (unsigned char*)hints, 5);
    }

    XMoveResizeWindow(dpy, win, 0, 0, windowWidth, windowHeight);
    XMapRaised(dpy, win);
    XFlush(dpy);
}

// window drag box

/* Creates a new drag region */
DragRegion* createDragRegion(int x, int y, int width, int height)
{
    DragRegion* r = (DragRegion*)malloc(sizeof(DragRegion));
    if(!r) return 0;

    r->x = x;
    r->y = y;
    r->width = width;
    r->height = height;
    r->enabled = 1;
    r->hover = 0;

    return r;
}

/* Updates the values of an existing region */
void updateDragRegion(DragRegion* region, int x, int y, int width, int height)
{
    if(!region) return;

    region->x = x;
    region->y = y;
    region->width = width;
    region->height = height;
}

/* Release a region */
void deleteDragRegion(DragRegion* region)
{
    if(!region) return;
    region->enabled = 0;
    free(region);
}

/* Check if the mouse is within the region */
int isInsideRegion(const DragRegion* r, int x, int y)
{
    return r->enabled &&
           x >= r->x && x < (r->x + r->width) &&
           y >= r->y && y < (r->y + r->height);
}

/* Checks region status and initiates window movement if necessary */
void checkDragRegion(LE_Display* display, DragRegion* region) // FIXME ! AAAAAAAAAAA
{
    if (!region || !region->enabled || !display)
        return;

    Display* dpy = (Display*)display->platformConnection;
    Window win = (Window)display->platformHandle;

    Window root, child;
    int rootX, rootY;
    int winX, winY;
    unsigned int mask;

    if (!XQueryPointer(dpy, win, &root, &child, &rootX, &rootY, &winX, &winY, &mask))
        return;

    // Checks if the mouse is within the defined area
    int inside = isInsideRegion(region, winX, winY);

    if (inside)
    {
        // Sets cursor if not already active
        if (!region->hover)
        {
            Cursor cursor = XCreateFontCursor(dpy, XC_fleur);
            XDefineCursor(dpy, win, cursor);
            XFreeCursor(dpy, cursor);
            region->hover = 1;
        }

        // Sends move event if button is pressed
        if ((mask & Button1Mask) && region->hover)
        {
            Atom moveresize = XInternAtom(dpy, "_NET_WM_MOVERESIZE", False);
            XEvent ev;
            memset(&ev, 0, sizeof(ev));
            ev.xclient.type = ClientMessage;
            ev.xclient.message_type = moveresize;
            ev.xclient.display = dpy;
            ev.xclient.window = win;
            ev.xclient.format = 32;
            ev.xclient.data.l[0] = rootX;
            ev.xclient.data.l[1] = rootY;
            ev.xclient.data.l[2] = 8; // _NET_WM_MOVERESIZE_MOVE
            ev.xclient.data.l[3] = Button1;
            ev.xclient.data.l[4] = 0;

            XUngrabPointer(dpy, CurrentTime);
            XSendEvent(dpy, DefaultRootWindow(dpy), False,
                       SubstructureRedirectMask | SubstructureNotifyMask, &ev);
        }
    }
    else
    {
        // Remove cursor if it leaves the region
        if (region->hover)
        {
            XUndefineCursor(dpy, win);
            region->hover = 0;
        }
    }

    XFlush(dpy);
}
