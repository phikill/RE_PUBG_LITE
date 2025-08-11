#ifndef _FUK_ANIMATED_GIF_H_
#define _FUK_ANIMATED_GIF_H_


#include<stdio.h>

#include<gif_load/gif_load.h>




unsigned char *load_file(const char *path, size_t *size_out) 
{
    FILE *fp = fopen(path, "rb");
    if (!fp) return NULL;

    fseek(fp, 0, SEEK_END);
    size_t size = ftell(fp);
    rewind(fp);

    unsigned char *data = malloc(size);
    if(!data) 
    { 
        fclose(fp); 
        return NULL; 
    }

    fread(data, 1, size, fp);
    fclose(fp);

    *size_out = size;
    return data;
}


GIF_Image imagem;
size_t gif_size;
unsigned char *gif_data = load_file("ui/assets/img/Loading-animation-03.gif", &gif_size);
GIF_Load(gif_data, gif_size, NULL, NULL, &imagem, 0);


void draw_gif_windows(HWND hwnd, GIF_Image *image, int frame_index) 
{
    HDC hdc = GetDC(hwnd);
    HDC memdc = CreateCompatibleDC(hdc);

    HBITMAP hbm = CreateBitmap(image->width, image->height, 1, 32, image->frames[frame_index].frame);
    SelectObject(memdc, hbm);

    RECT rect;
    GetClientRect(hwnd, &rect);
    int x = (rect.right - image->width) / 2;
    int y = (rect.bottom - image->height) / 2;

    BitBlt(hdc, x, y, image->width, image->height, memdc, 0, 0, SRCCOPY);

    DeleteObject(hbm);
    DeleteDC(memdc);
    ReleaseDC(hwnd, hdc);
}

void CEF_onLoadEnd(cef_load_handler_t *self,
                   cef_browser_t *browser,
                   cef_frame_t *frame,
                   int httpStatusCode)
{
    // Aqui você para de mostrar o GIF
    gif_visible = 0;
}

























#endif /* _FUK_ANIMATED_GIF_H_ */
