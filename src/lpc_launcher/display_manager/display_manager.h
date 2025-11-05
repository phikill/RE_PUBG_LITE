/* display_manager.h : window manipulator system.
2023 - 2024 Sild Team
2025 - OG:BattleGrounds 
*/

/*
NOTE !

    This scheme was designed for desktops or window management systems, 
    perhaps it will be implemented in the future for mobile with changes to the function names.
    
    some functions may work differently or have an undesired result on different systems
*/

#ifndef _DISPLAY_MANAGER_H_
#define _DISPLAY_MANAGER_H_

/* oh my head ! this comment is for me , im so confuse sorry
    windows [HWND] = Linux [Window]
    windows [HINSTANCE] +- Linux [Display]
 */

#ifndef MAX_WINDOWS
    #define MAX_WINDOWS 14 /* Based on old systems resource limits , 
    if you want more windows just #undef this header and increase the limit*/
#endif 


typedef struct 
{
    void *platformHandle;     /* Platform-specific handle, HWND for Win32, Window for X11, etc. */
    void *platformConnection; /* Platform-specific Instance Server, HINSTANCE for Win32, Display for X11, etc */
    int  width;
    int  height;
    int  windowPosX;
    int  windowPosY;
    int  windowActiveStatus; 
} LE_Display;



/* Display Functions */
LE_Display* engineCreateDisplay(const char *title, int width, int height);

void engineDeleteDisplay(LE_Display *display);

void getWindowActiveStatus(LE_Display *display);

int engineSetLoop(LE_Display *display, int *loopVar, void(*renderFunction)());

void setWindowSize(LE_Display *display, int width, int height);

void getWindowSize(LE_Display *display, int *width, int *height);

void setWindowCentered(LE_Display *display);

void engineSetWindowTitle(LE_Display *display, const char* format, ...);

void engineSetWindowIcon(LE_Display *display, const char* iconPath);

void windowBorderless(LE_Display *display, int mode, ...);





// tests drag region

typedef struct
{
    int x, y, width, height;
    int enabled;
    int hover;
} DragRegion;

DragRegion* createDragRegion(int x, int y, int width, int height);

void updateDragRegion(DragRegion* region, int x, int y, int width, int height);

void deleteDragRegion(DragRegion* region);

int isInsideRegion(const DragRegion* r, int x, int y);

void checkDragRegion(LE_Display* udisplay, DragRegion* region);








#endif /*_WINDOW_MANAGER_H_
*/
