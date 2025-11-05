#ifndef _FUK_ANIMATED_GIF_H_
#define _FUK_ANIMATED_GIF_H_

#include<windows.h>
#include<stdio.h>

#include<gif_load/gif_load.h>




//unsigned char *gif_data = load_file("ui/assets/img/Loading-animation-03.gif", &gif_size);

typedef struct 
{
    int nframes;
    int current_frame;
    HBITMAP *frames;
    int *delays;
} GifAnim;


static uint32_t *accum_buffer = NULL;
static uint32_t *prev_buffer  = NULL;
static int gif_width = 0, gif_height = 0;

// Callback do gif_load
static void gif_write_frame(void *data, struct GIF_WHDR *whdr)
{
    GifAnim *anim = (GifAnim*)data;
    uint32_t *frame_copy;
    int x, y;
    void *bits;
    BITMAPINFO bmi = {0};
    HBITMAP hbm;

    if (!accum_buffer)
    {
        gif_width  = whdr->xdim;
        gif_height = whdr->ydim;
        accum_buffer = (uint32_t*)calloc(gif_width * gif_height, sizeof(uint32_t));
        prev_buffer  = (uint32_t*)calloc(gif_width * gif_height, sizeof(uint32_t));
    }

    if (whdr->mode == GIF_PREV)
        memcpy(prev_buffer, accum_buffer, gif_width * gif_height * sizeof(uint32_t));

    frame_copy = (uint32_t*)malloc(gif_width * gif_height * sizeof(uint32_t));
    memcpy(frame_copy, accum_buffer, gif_width * gif_height * sizeof(uint32_t));

    for (y = 0; y < whdr->fryd; y++)
    {
        for (x = 0; x < whdr->frxd; x++)
        {
            uint8_t r,g,b;
            int src_idx = y * whdr->frxd + x;
            int dst_idx = (y + whdr->fryo) * gif_width + (x + whdr->frxo);
            uint8_t idx = whdr->bptr[src_idx];

            if (whdr->tran >= 0 && idx == whdr->tran)
                continue;

            r = whdr->cpal[idx].R;
            g = whdr->cpal[idx].G;
            b = whdr->cpal[idx].B;
            frame_copy[dst_idx] = (0xFF << 24) | (r << 16) | (g << 8) | b;
        }
    }

    memcpy(accum_buffer, frame_copy, gif_width * gif_height * sizeof(uint32_t));

    bmi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    bmi.bmiHeader.biWidth = gif_width;
    bmi.bmiHeader.biHeight = -gif_height;
    bmi.bmiHeader.biPlanes = 1;
    bmi.bmiHeader.biBitCount = 32;
    bmi.bmiHeader.biCompression = BI_RGB;

    hbm = CreateDIBSection(NULL, &bmi, DIB_RGB_COLORS, &bits, NULL, 0);
    memcpy(bits, frame_copy, gif_width * gif_height * sizeof(uint32_t));

    anim->frames[anim->nframes] = hbm;
    anim->delays[anim->nframes] = (whdr->time > 0) ? whdr->time * 10 : 100;
    anim->nframes++;

    switch (whdr->mode)
    {
        case GIF_BKGD:
            memset(accum_buffer, 0, gif_width * gif_height * sizeof(uint32_t));
            break;
        case GIF_PREV:
            memcpy(accum_buffer, prev_buffer, gif_width * gif_height * sizeof(uint32_t));
            break;
        default:
            break;
    }

    free(frame_copy);
}

// Carregar gif
static int load_gif(const char *filename, GifAnim *g_gif_) 
{
    long size;
    uint8_t *buffer;
    FILE *f = fopen(filename, "rb");
    
    if(!f) return 0;
    
    fseek(f, 0, SEEK_END);
    size = ftell(f);
    fseek(f, 0, SEEK_SET);

    buffer = malloc(size);
    fread(buffer, 1, size, f);
    fclose(f);

    g_gif_->frames = malloc(256 * sizeof(HBITMAP));
    g_gif_->delays = malloc(256 * sizeof(int));

    GIF_Load(buffer, size, gif_write_frame, 0, g_gif_, 0);
    free(buffer);
    
    return 1;
}

// Função para desenhar o frame atual diretamente
static void DrawCurrentFrame(HWND window_handle, GifAnim *g_gif_)
{
    HDC hdc;
    HDC memdc;
    RECT rc;
    BITMAP bm;
    HBITMAP current_frame;
    int center_x, center_y;

    if(g_gif_->nframes <= 0) return;

    hdc = GetDC(window_handle);
    memdc = CreateCompatibleDC(hdc);
    
    // Obtém o bitmap atual
    current_frame = g_gif_->frames[g_gif_->current_frame];
    SelectObject(memdc, current_frame);
    
    // Obtém informações do bitmap
    GetObject(current_frame, sizeof(bm), &bm);
    
    // Obtém área do cliente
    GetClientRect(window_handle, &rc);
    
    // Calcula posição central
    center_x = (rc.right - bm.bmWidth) / 2;
    center_y = (rc.bottom - bm.bmHeight) / 2;
    
    // REMOVE ESTA PARTE - Não limpa o fundo
    // bg_brush = CreateSolidBrush(RGB(240, 240, 240));
    // FillRect(hdc, &rc, bg_brush);
    // DeleteObject(bg_brush);
    
    // Desenha o frame
    BitBlt(hdc, center_x, center_y, bm.bmWidth, bm.bmHeight, 
           memdc, 0, 0, SRCCOPY);
    
    // Limpeza
    DeleteDC(memdc);
    ReleaseDC(window_handle, hdc);
}

























#endif /* _FUK_ANIMATED_GIF_H_ */
