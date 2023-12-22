/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ROBOTOMONO_18
#define ROBOTOMONO_18 1
#endif

#if ROBOTOMONO_18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xc3, 0xc0,

    /* U+0022 "\"" */
    0x99, 0x99,

    /* U+0023 "#" */
    0x9, 0x2, 0x41, 0x91, 0xff, 0x13, 0x4, 0x81,
    0x20, 0x48, 0xff, 0x88, 0x82, 0x60, 0x90, 0x24,
    0x0,

    /* U+0024 "$" */
    0x18, 0x18, 0x7e, 0xe7, 0xc3, 0xc3, 0xc0, 0x70,
    0x3c, 0xe, 0x7, 0xc3, 0xc3, 0xe7, 0x7e, 0x18,
    0x18,

    /* U+0025 "%" */
    0x70, 0x22, 0x8, 0xb2, 0x28, 0x76, 0x1, 0x0,
    0xc0, 0x2e, 0x1c, 0x45, 0x12, 0x44, 0x11, 0x3,
    0x80,

    /* U+0026 "&" */
    0x38, 0x32, 0x19, 0xc, 0x86, 0xc1, 0xc0, 0xe0,
    0xd3, 0xcd, 0xe2, 0xb1, 0xc8, 0xe3, 0xd8,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0x8, 0xcc, 0x46, 0x33, 0x18, 0xc6, 0x31, 0x8c,
    0x21, 0x8c, 0x30, 0x82,

    /* U+0029 ")" */
    0x86, 0x18, 0x43, 0x18, 0x63, 0x18, 0xc6, 0x31,
    0x88, 0xc6, 0x62, 0x20,

    /* U+002A "*" */
    0xc, 0x3, 0x0, 0xc1, 0xb6, 0x3f, 0x7, 0x81,
    0x60, 0xcc, 0x21, 0x0,

    /* U+002B "+" */
    0x18, 0xc, 0x6, 0x3, 0xf, 0xf8, 0xc0, 0x60,
    0x30, 0x18, 0x0,

    /* U+002C "," */
    0x6d, 0xbc,

    /* U+002D "-" */
    0xfe,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x6, 0x8, 0x10, 0x60, 0x81, 0x6, 0x8, 0x30,
    0x60, 0x83, 0x4, 0x8, 0x30, 0x0,

    /* U+0030 "0" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc7, 0xcf, 0xdb, 0xf3,
    0xe3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+0031 "1" */
    0xd, 0xfe, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30,
    0xc3, 0xc,

    /* U+0032 "2" */
    0x3c, 0x66, 0xc3, 0xc3, 0x3, 0x7, 0x6, 0xc,
    0x18, 0x38, 0x70, 0x60, 0xff,

    /* U+0033 "3" */
    0x3e, 0x31, 0x90, 0x60, 0x30, 0x18, 0x18, 0x78,
    0x6, 0x1, 0x80, 0xd0, 0x6c, 0x63, 0xe0,

    /* U+0034 "4" */
    0x3, 0x3, 0x83, 0xc1, 0x61, 0xb1, 0x98, 0x8c,
    0xc6, 0x43, 0x7f, 0xc0, 0xc0, 0x60, 0x30,

    /* U+0035 "5" */
    0x7f, 0x40, 0xc0, 0xc0, 0xfc, 0xc6, 0x3, 0x3,
    0x3, 0x83, 0x83, 0xc6, 0x3c,

    /* U+0036 "6" */
    0x1c, 0x30, 0x60, 0x40, 0xdc, 0xe6, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+0037 "7" */
    0xff, 0x80, 0xc0, 0x40, 0x60, 0x20, 0x30, 0x10,
    0x18, 0xc, 0xc, 0x6, 0x6, 0x3, 0x0,

    /* U+0038 "8" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0x66, 0x3c, 0x66,
    0xc3, 0xc3, 0xc3, 0x66, 0x3c,

    /* U+0039 "9" */
    0x3c, 0x66, 0xc3, 0xc3, 0xc3, 0xc3, 0x67, 0x3b,
    0x3, 0x3, 0x6, 0xc, 0x38,

    /* U+003A ":" */
    0xf0, 0x0, 0xf0,

    /* U+003B ";" */
    0xf0, 0x0, 0xff, 0x80,

    /* U+003C "<" */
    0x3, 0xf, 0x3c, 0xe0, 0xe0, 0x38, 0xf, 0x3,

    /* U+003D "=" */
    0xff, 0x0, 0x0, 0x0, 0xff,

    /* U+003E ">" */
    0x80, 0xe0, 0x3c, 0x7, 0x7, 0x1c, 0xf0, 0xc0,

    /* U+003F "?" */
    0x3c, 0xc7, 0xc3, 0x3, 0x7, 0x6, 0xc, 0x18,
    0x18, 0x0, 0x0, 0x18, 0x18,

    /* U+0040 "@" */
    0x1f, 0x8, 0x64, 0xe9, 0x69, 0x92, 0x64, 0x99,
    0x26, 0x49, 0x96, 0xa6, 0xe4, 0x1, 0x80, 0x1e,
    0x0,

    /* U+0041 "A" */
    0x8, 0xe, 0x7, 0x2, 0x83, 0x61, 0xb0, 0x88,
    0xc6, 0x7f, 0x20, 0x90, 0x58, 0x38, 0x8,

    /* U+0042 "B" */
    0xfc, 0xc6, 0xc3, 0xc3, 0xc3, 0xc6, 0xfc, 0xc6,
    0xc3, 0xc3, 0xc3, 0xc6, 0xfc,

    /* U+0043 "C" */
    0x1e, 0x31, 0x98, 0x78, 0x1c, 0x6, 0x3, 0x1,
    0x80, 0xc0, 0x60, 0x58, 0x6c, 0x61, 0xe0,

    /* U+0044 "D" */
    0xfc, 0x63, 0x30, 0xd8, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0xd8, 0xcf, 0xc0,

    /* U+0045 "E" */
    0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0, 0xff,

    /* U+0046 "F" */
    0xff, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xfe, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0047 "G" */
    0x1e, 0x31, 0x98, 0x78, 0xc, 0x6, 0x3, 0x1f,
    0x83, 0xc1, 0xe0, 0xd8, 0x6c, 0x71, 0xe0,

    /* U+0048 "H" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0xff,
    0x83, 0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x18,

    /* U+0049 "I" */
    0xff, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18, 0xff,

    /* U+004A "J" */
    0x1, 0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x6,
    0x3, 0x1, 0xe0, 0xd0, 0x6c, 0x63, 0xe0,

    /* U+004B "K" */
    0xc1, 0xe1, 0xb1, 0x99, 0x8d, 0x86, 0xc3, 0xe1,
    0xd8, 0xcc, 0x63, 0x30, 0xd8, 0x6c, 0x18,

    /* U+004C "L" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0, 0xc0,
    0xc0, 0xc0, 0xc0, 0xc0, 0xff,

    /* U+004D "M" */
    0xe3, 0xf1, 0xf8, 0xfe, 0xfd, 0x5e, 0xaf, 0x77,
    0xb3, 0xc9, 0xe0, 0xf0, 0x78, 0x3c, 0x18,

    /* U+004E "N" */
    0xc3, 0xe3, 0xe3, 0xe3, 0xf3, 0xd3, 0xdb, 0xcb,
    0xcf, 0xc7, 0xc7, 0xc7, 0xc3,

    /* U+004F "O" */
    0x3c, 0x31, 0x98, 0xd8, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xd8, 0xcc, 0x63, 0xe0,

    /* U+0050 "P" */
    0xfe, 0x61, 0xb0, 0x78, 0x3c, 0x1e, 0xf, 0xd,
    0xfc, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x0,

    /* U+0051 "Q" */
    0x1c, 0x31, 0x98, 0xd8, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xd8, 0xcc, 0x63, 0xe0, 0x1c,
    0x6,

    /* U+0052 "R" */
    0xfc, 0xc6, 0xc3, 0xc3, 0xc3, 0xc6, 0xfc, 0xcc,
    0xc4, 0xc6, 0xc6, 0xc3, 0xc3,

    /* U+0053 "S" */
    0x1f, 0xc, 0x66, 0xd, 0x83, 0x70, 0xf, 0x1,
    0xf0, 0x1e, 0x1, 0xf8, 0x36, 0xd, 0xc6, 0x1f,
    0x0,

    /* U+0054 "T" */
    0xff, 0x86, 0x3, 0x1, 0x80, 0xc0, 0x60, 0x30,
    0x18, 0xc, 0x6, 0x3, 0x1, 0x80, 0xc0,

    /* U+0055 "U" */
    0xc1, 0xe0, 0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7,
    0x83, 0xc1, 0xe0, 0xf0, 0x6c, 0x63, 0xe0,

    /* U+0056 "V" */
    0xc1, 0xe0, 0xf0, 0x48, 0x66, 0x33, 0x10, 0x88,
    0x6c, 0x34, 0xa, 0x7, 0x3, 0x80, 0x80,

    /* U+0057 "W" */
    0x88, 0xc4, 0x67, 0x3a, 0xbd, 0x5e, 0xaf, 0x56,
    0xae, 0x77, 0x31, 0x98, 0xcc, 0x66, 0x30,

    /* U+0058 "X" */
    0xc1, 0xb1, 0x98, 0xc6, 0xc3, 0x60, 0xe0, 0x20,
    0x38, 0x36, 0x1b, 0x18, 0xc8, 0x2c, 0x18,

    /* U+0059 "Y" */
    0xc0, 0xd8, 0x66, 0x18, 0xcc, 0x33, 0x4, 0x81,
    0xe0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x0,

    /* U+005A "Z" */
    0xff, 0x3, 0x6, 0x6, 0xc, 0x8, 0x18, 0x10,
    0x30, 0x60, 0x60, 0xc0, 0xff,

    /* U+005B "[" */
    0xfc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc,
    0xcf,

    /* U+005C "\\" */
    0xc0, 0x81, 0x3, 0x2, 0x6, 0xc, 0x8, 0x18,
    0x10, 0x20, 0x60, 0x40, 0x81, 0x80,

    /* U+005D "]" */
    0xf3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33,
    0x3f,

    /* U+005E "^" */
    0x10, 0x70, 0xe3, 0x46, 0xc8, 0xb1, 0x80,

    /* U+005F "_" */
    0xff,

    /* U+0060 "`" */
    0xc9, 0x80,

    /* U+0061 "a" */
    0x3c, 0xe6, 0xc3, 0x3, 0x3f, 0xe3, 0xc3, 0xc3,
    0xe7, 0x7b,

    /* U+0062 "b" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xfc, 0xe6, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xe6, 0xfc,

    /* U+0063 "c" */
    0x3c, 0x62, 0xc3, 0xc0, 0xc0, 0xc0, 0xc0, 0xc3,
    0x62, 0x3c,

    /* U+0064 "d" */
    0x3, 0x3, 0x3, 0x3, 0x3f, 0x67, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0x67, 0x3f,

    /* U+0065 "e" */
    0x1e, 0x31, 0x90, 0x78, 0x3f, 0xfe, 0x3, 0x1,
    0x80, 0x63, 0x8f, 0x0,

    /* U+0066 "f" */
    0xf, 0x8c, 0xc, 0x6, 0xf, 0xf1, 0x80, 0xc0,
    0x60, 0x30, 0x18, 0xc, 0x6, 0x3, 0x1, 0x80,

    /* U+0067 "g" */
    0x3f, 0x67, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0x67, 0x3f, 0x3, 0x43, 0x66, 0x3c,

    /* U+0068 "h" */
    0xc0, 0xc0, 0xc0, 0xc0, 0xde, 0xe7, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,

    /* U+0069 "i" */
    0x18, 0x18, 0x0, 0xf8, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18, 0xff,

    /* U+006A "j" */
    0xc, 0x30, 0x1f, 0xc, 0x30, 0xc3, 0xc, 0x30,
    0xc3, 0xc, 0x30, 0xc6, 0xf0,

    /* U+006B "k" */
    0xc0, 0x60, 0x30, 0x18, 0xc, 0x36, 0x33, 0x31,
    0xb0, 0xf8, 0x7c, 0x33, 0x18, 0xcc, 0x36, 0x18,

    /* U+006C "l" */
    0xf8, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
    0x18, 0x18, 0x18, 0x18, 0x18, 0xff,

    /* U+006D "m" */
    0xff, 0xb3, 0x3c, 0xcf, 0x33, 0xcc, 0xf3, 0x3c,
    0xcf, 0x33, 0xcc, 0xf3, 0x30,

    /* U+006E "n" */
    0xde, 0xe7, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3,

    /* U+006F "o" */
    0x3e, 0x31, 0xb8, 0xd8, 0x3c, 0x1e, 0xf, 0x7,
    0x82, 0x63, 0x1f, 0x0,

    /* U+0070 "p" */
    0xfc, 0xe6, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xe6, 0xfc, 0xc0, 0xc0, 0xc0, 0xc0,

    /* U+0071 "q" */
    0x3f, 0x67, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0x67, 0x3f, 0x3, 0x3, 0x3, 0x3,

    /* U+0072 "r" */
    0xdf, 0xc3, 0x6, 0xc, 0x18, 0x30, 0x60, 0xc1,
    0x80,

    /* U+0073 "s" */
    0x1e, 0x31, 0x98, 0x4e, 0x3, 0xe0, 0x78, 0x4,
    0xc2, 0x61, 0x1f, 0x0,

    /* U+0074 "t" */
    0x30, 0x30, 0x30, 0xff, 0x30, 0x30, 0x30, 0x30,
    0x30, 0x30, 0x30, 0x38, 0x1f,

    /* U+0075 "u" */
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0x67, 0x7b,

    /* U+0076 "v" */
    0xc1, 0xe0, 0x90, 0xcc, 0x62, 0x21, 0xb0, 0xd0,
    0x28, 0x1c, 0x4, 0x0,

    /* U+0077 "w" */
    0x44, 0x51, 0x14, 0xe5, 0x2b, 0x6a, 0xca, 0xa3,
    0xb8, 0xc6, 0x31, 0x8c, 0x60,

    /* U+0078 "x" */
    0xc1, 0xb1, 0x8d, 0x82, 0x81, 0xc0, 0xe0, 0xd0,
    0x6c, 0x63, 0x60, 0xc0,

    /* U+0079 "y" */
    0xc1, 0xe0, 0xd0, 0xcc, 0x66, 0x21, 0xb0, 0xd0,
    0x28, 0x1c, 0x4, 0x6, 0x2, 0x3, 0x7, 0x0,

    /* U+007A "z" */
    0xff, 0x7, 0x6, 0xc, 0x18, 0x18, 0x30, 0x60,
    0xc0, 0xff,

    /* U+007B "{" */
    0x6, 0x18, 0x60, 0xc1, 0x83, 0x6, 0xc, 0x31,
    0xc0, 0xc0, 0xc1, 0x83, 0x6, 0xc, 0xc, 0xc,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xc0,

    /* U+007D "}" */
    0xc1, 0x83, 0xc, 0x30, 0xc3, 0xc, 0x18, 0x31,
    0x8c, 0x30, 0xc3, 0xc, 0x63, 0x0,

    /* U+007E "~" */
    0x78, 0x73, 0x38, 0x78
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 173, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 173, .box_w = 2, .box_h = 13, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 173, .box_w = 4, .box_h = 4, .ofs_x = 3, .ofs_y = 10},
    {.bitmap_index = 7, .adv_w = 173, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 24, .adv_w = 173, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 41, .adv_w = 173, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 58, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 173, .box_w = 2, .box_h = 4, .ofs_x = 4, .ofs_y = 10},
    {.bitmap_index = 74, .adv_w = 173, .box_w = 5, .box_h = 19, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 86, .adv_w = 173, .box_w = 5, .box_h = 19, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 98, .adv_w = 173, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 110, .adv_w = 173, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 121, .adv_w = 173, .box_w = 3, .box_h = 5, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 123, .adv_w = 173, .box_w = 7, .box_h = 1, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 124, .adv_w = 173, .box_w = 2, .box_h = 2, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 173, .box_w = 7, .box_h = 15, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 139, .adv_w = 173, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 173, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 173, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 175, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 190, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 205, .adv_w = 173, .box_w = 8, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 218, .adv_w = 173, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 231, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 246, .adv_w = 173, .box_w = 8, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 173, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 272, .adv_w = 173, .box_w = 2, .box_h = 10, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 275, .adv_w = 173, .box_w = 2, .box_h = 13, .ofs_x = 5, .ofs_y = -3},
    {.bitmap_index = 279, .adv_w = 173, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 287, .adv_w = 173, .box_w = 8, .box_h = 5, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 292, .adv_w = 173, .box_w = 8, .box_h = 8, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 300, .adv_w = 173, .box_w = 8, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 173, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 330, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 345, .adv_w = 173, .box_w = 8, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 388, .adv_w = 173, .box_w = 8, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 401, .adv_w = 173, .box_w = 8, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 429, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 173, .box_w = 8, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 457, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 472, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 487, .adv_w = 173, .box_w = 8, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 500, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 515, .adv_w = 173, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 528, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 543, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 173, .box_w = 9, .box_h = 15, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 575, .adv_w = 173, .box_w = 8, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 588, .adv_w = 173, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 605, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 620, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 635, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 650, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 665, .adv_w = 173, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 680, .adv_w = 173, .box_w = 10, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 697, .adv_w = 173, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 710, .adv_w = 173, .box_w = 4, .box_h = 18, .ofs_x = 4, .ofs_y = -3},
    {.bitmap_index = 719, .adv_w = 173, .box_w = 7, .box_h = 15, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 733, .adv_w = 173, .box_w = 4, .box_h = 18, .ofs_x = 4, .ofs_y = -3},
    {.bitmap_index = 742, .adv_w = 173, .box_w = 7, .box_h = 7, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 749, .adv_w = 173, .box_w = 8, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 750, .adv_w = 173, .box_w = 3, .box_h = 3, .ofs_x = 4, .ofs_y = 11},
    {.bitmap_index = 752, .adv_w = 173, .box_w = 8, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 762, .adv_w = 173, .box_w = 8, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 776, .adv_w = 173, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 786, .adv_w = 173, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 800, .adv_w = 173, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 812, .adv_w = 173, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 828, .adv_w = 173, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 842, .adv_w = 173, .box_w = 8, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 856, .adv_w = 173, .box_w = 8, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 869, .adv_w = 173, .box_w = 6, .box_h = 17, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 882, .adv_w = 173, .box_w = 9, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 898, .adv_w = 173, .box_w = 8, .box_h = 14, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 912, .adv_w = 173, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 925, .adv_w = 173, .box_w = 8, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 935, .adv_w = 173, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 947, .adv_w = 173, .box_w = 8, .box_h = 14, .ofs_x = 2, .ofs_y = -4},
    {.bitmap_index = 961, .adv_w = 173, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 975, .adv_w = 173, .box_w = 7, .box_h = 10, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 984, .adv_w = 173, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 996, .adv_w = 173, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1009, .adv_w = 173, .box_w = 8, .box_h = 10, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1019, .adv_w = 173, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1031, .adv_w = 173, .box_w = 10, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1044, .adv_w = 173, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1056, .adv_w = 173, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 1072, .adv_w = 173, .box_w = 8, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1082, .adv_w = 173, .box_w = 7, .box_h = 18, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 1098, .adv_w = 173, .box_w = 2, .box_h = 17, .ofs_x = 5, .ofs_y = -4},
    {.bitmap_index = 1103, .adv_w = 173, .box_w = 6, .box_h = 18, .ofs_x = 3, .ofs_y = -3},
    {.bitmap_index = 1117, .adv_w = 173, .box_w = 10, .box_h = 3, .ofs_x = 1, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t robotomono_18 = {
#else
lv_font_t robotomono_18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 19,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ROBOTOMONO_18*/

