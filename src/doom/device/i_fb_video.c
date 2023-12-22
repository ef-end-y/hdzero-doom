#include "../i_video.h"
#include "../v_video.h"
#include "core/common.hh"
#include <fcntl.h>
#include <linux/fb.h>
#include <lvgl/lvgl.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <sys/mman.h>
#include <unistd.h>

void I_InitGraphics(void) {
}

void I_ShutdownGraphics(void) {
}

void I_StartFrame(void) {
}
__attribute__((packed)) struct Color {
    uint8_t b;
    uint8_t g;
    uint8_t r;
    uint8_t a;
};

union ColorInt {
    struct Color col;
    uint32_t raw;
};

static union ColorInt colors[256];

// Takes full 8 bit values.
void I_SetPalette(byte *palette) {
    byte c;
    // set the X colormap entries
    for (int i = 0; i < 256; i++) {
        c = gammatable[usegamma][*palette++];
        colors[i].col.r = (c << 8) + c;
        c = gammatable[usegamma][*palette++];
        colors[i].col.g = (c << 8) + c;
        c = gammatable[usegamma][*palette++];
        colors[i].col.b = (c << 8) + c;
        colors[i].col.a = 255;
    }
}

void I_UpdateNoBlit(void) {
}

// scale 320*200 to (320*4) * (200*4)
#define DOOM_SCALE 4
#define SCREEN_W   (SCREENWIDTH * DOOM_SCALE)
#define SCREEN_H   (SCREENHEIGHT * DOOM_SCALE)

static lv_img_dsc_t doom_img = {
    .header.always_zero = 0,
    .header.w = SCREEN_W,
    .header.h = SCREEN_H,
    .data_size = SCREEN_W * SCREEN_H * 4, // 4 bytes in one pixel
    .header.cf = LV_IMG_CF_TRUE_COLOR,
    .data = 0,
};

lv_obj_t *icon = 0;

uint32_t doom_img_data[SCREEN_W * SCREEN_H] = {};

void I_FinishUpdate(void) {
    pthread_mutex_lock(&lvgl_mutex);

    if (icon) {
        lv_obj_del(icon);
    }
    icon = lv_img_create(lv_scr_act());

    doom_img.data = (const uint8_t *)&doom_img_data;

    int p = 0;
    for (int gy = 0; gy < SCREENHEIGHT; gy++) {
        for (int gx = 0; gx < SCREENWIDTH; gx++) {
            uint32_t pixel = colors[*(screens[0] + gy * SCREENWIDTH + gx)].raw;
            for (int j = 0; j < DOOM_SCALE; j++) {
                for (int i = 0; i < DOOM_SCALE; i++) {
                    doom_img_data[p + i + j * SCREEN_W] = pixel;
                }
            }
            p += DOOM_SCALE;
        }
        p += SCREEN_W * (DOOM_SCALE - 1);
    }

    lv_img_set_src(icon, &doom_img);
    lv_obj_center(icon);

    lv_timer_handler();

    pthread_mutex_unlock(&lvgl_mutex);
}

void I_ReadScreen(byte *scr) {
    memcpy(scr, screens[0], SCREENWIDTH * SCREENHEIGHT);
}