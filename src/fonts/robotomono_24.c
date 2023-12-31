/*******************************************************************************
 * Size: 24 px
 * Bpp: 1
 * Opts: 
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef ROBOTOMONO_24
#define ROBOTOMONO_24 1
#endif

#if ROBOTOMONO_24

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xfc, 0x3, 0xc0,

    /* U+0022 "\"" */
    0xcf, 0x3c, 0xf3, 0xcc,

    /* U+0023 "#" */
    0x6, 0x20, 0x31, 0x1, 0x18, 0x8, 0xc0, 0xc6,
    0x3f, 0xfd, 0xff, 0xe1, 0x18, 0x8, 0xc0, 0xc6,
    0x3f, 0xfd, 0xff, 0xe1, 0x18, 0x8, 0xc0, 0xc6,
    0x6, 0x20, 0x31, 0x0,

    /* U+0024 "$" */
    0x6, 0x0, 0xc0, 0x3c, 0x1f, 0xe3, 0xc, 0xc1,
    0xd8, 0x1b, 0x3, 0x70, 0x7, 0x0, 0x7c, 0x7,
    0xc0, 0x1c, 0x1, 0xc0, 0x1e, 0x3, 0xc0, 0x6c,
    0x1c, 0xff, 0xf, 0x80, 0x60, 0xc, 0x0,

    /* U+0025 "%" */
    0x78, 0x3, 0xf0, 0xc, 0xc0, 0x33, 0x18, 0xcc,
    0x43, 0xf3, 0x7, 0x98, 0x0, 0x40, 0x3, 0x0,
    0x19, 0xc0, 0x4f, 0x83, 0x63, 0x19, 0x8c, 0x66,
    0x30, 0x18, 0xc0, 0x3e, 0x0, 0x70,

    /* U+0026 "&" */
    0xe, 0x1, 0xf0, 0x39, 0x83, 0x18, 0x31, 0x83,
    0x30, 0x1e, 0x1, 0xc0, 0x3c, 0x7, 0x63, 0x67,
    0x3c, 0x37, 0xc1, 0xec, 0x1e, 0xe1, 0xe7, 0xfe,
    0x1e, 0x30,

    /* U+0027 "'" */
    0xff, 0xc0,

    /* U+0028 "(" */
    0xc, 0x71, 0x8c, 0x21, 0x86, 0x18, 0xc3, 0xc,
    0x30, 0xc3, 0xc, 0x30, 0xc1, 0x86, 0x18, 0x30,
    0x41, 0x83, 0x4,

    /* U+0029 ")" */
    0xc1, 0x86, 0xc, 0x10, 0x61, 0x82, 0xc, 0x30,
    0xc3, 0xc, 0x30, 0xc3, 0x8, 0x61, 0x86, 0x30,
    0x86, 0x30, 0x80,

    /* U+002A "*" */
    0x6, 0x0, 0x60, 0x6, 0x4, 0x60, 0xf6, 0xe7,
    0xfe, 0x6, 0x0, 0xf0, 0x19, 0x83, 0x9c, 0x30,
    0xc0, 0x8,

    /* U+002B "+" */
    0x6, 0x0, 0x60, 0x6, 0x0, 0x60, 0x6, 0xf,
    0xff, 0xff, 0xf0, 0x60, 0x6, 0x0, 0x60, 0x6,
    0x0, 0x60,

    /* U+002C "," */
    0x6d, 0xb7, 0x80,

    /* U+002D "-" */
    0xff, 0xff, 0xc0,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0x1, 0x81, 0x80, 0xc0, 0x60, 0x60, 0x30, 0x18,
    0x18, 0xc, 0xc, 0x6, 0x3, 0x3, 0x1, 0x81,
    0x80, 0xc0, 0x60, 0x60, 0x30, 0x0,

    /* U+0030 "0" */
    0x1f, 0x7, 0xf1, 0xc7, 0x70, 0x7c, 0x7, 0x80,
    0xf0, 0x7e, 0x1b, 0xce, 0x7b, 0x8f, 0xc1, 0xf0,
    0x3c, 0x7, 0xc1, 0xdc, 0x71, 0xfc, 0x1f, 0x0,

    /* U+0031 "1" */
    0x6, 0x3f, 0xff, 0x30, 0x60, 0xc1, 0x83, 0x6,
    0xc, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x6,

    /* U+0032 "2" */
    0x1f, 0x7, 0xf9, 0x83, 0xe0, 0x3c, 0x6, 0x0,
    0xc0, 0x18, 0x6, 0x1, 0x80, 0x60, 0x18, 0x6,
    0x1, 0x80, 0x60, 0x18, 0x7, 0xff, 0xff, 0xe0,

    /* U+0033 "3" */
    0x1f, 0xf, 0xf3, 0x87, 0x60, 0x60, 0xc, 0x1,
    0x80, 0x60, 0xf8, 0x1f, 0x80, 0x38, 0x1, 0x80,
    0x3c, 0x7, 0x80, 0xd8, 0x33, 0xfe, 0x1f, 0x0,

    /* U+0034 "4" */
    0x0, 0xc0, 0x1c, 0x3, 0xc0, 0x7c, 0x6, 0xc0,
    0xcc, 0x1c, 0xc1, 0x8c, 0x30, 0xc7, 0xc, 0x60,
    0xcf, 0xff, 0xff, 0xf0, 0xc, 0x0, 0xc0, 0xc,
    0x0, 0xc0,

    /* U+0035 "5" */
    0x3f, 0xe7, 0xfc, 0xc0, 0x18, 0x6, 0x0, 0xc0,
    0x1b, 0xc3, 0xfe, 0x71, 0xc0, 0x1c, 0x1, 0x80,
    0x3e, 0x6, 0xc0, 0xdc, 0x31, 0xfe, 0x1f, 0x0,

    /* U+0036 "6" */
    0x7, 0x83, 0xf0, 0xe0, 0x38, 0x6, 0x0, 0x9e,
    0x3f, 0xe7, 0x8e, 0xe0, 0xf8, 0xf, 0x1, 0xe0,
    0x3c, 0x6, 0xc1, 0xdc, 0x71, 0xfc, 0x1f, 0x0,

    /* U+0037 "7" */
    0xff, 0xff, 0xff, 0x0, 0x60, 0x6, 0x0, 0xe0,
    0xc, 0x1, 0xc0, 0x18, 0x3, 0x80, 0x30, 0x7,
    0x0, 0x60, 0xe, 0x0, 0xc0, 0x1c, 0x1, 0x80,
    0x18, 0x0,

    /* U+0038 "8" */
    0x3e, 0xf, 0xf3, 0x87, 0x60, 0x6c, 0xd, 0x81,
    0x98, 0x61, 0xf8, 0x3f, 0x8c, 0x1b, 0x1, 0xe0,
    0x3c, 0x7, 0x80, 0xd8, 0x33, 0xfe, 0x1f, 0x0,

    /* U+0039 "9" */
    0x1f, 0x7, 0xf1, 0xc7, 0x70, 0x6c, 0x7, 0x80,
    0xf0, 0x1f, 0x3, 0x71, 0xef, 0xfc, 0x79, 0x80,
    0x30, 0xc, 0x3, 0x80, 0xe1, 0xf8, 0x3c, 0x0,

    /* U+003A ":" */
    0xff, 0x80, 0x0, 0x3, 0xfe,

    /* U+003B ";" */
    0x77, 0x70, 0x0, 0x0, 0x0, 0x33, 0x33, 0x36,
    0x60,

    /* U+003C "<" */
    0x0, 0x40, 0x70, 0xfc, 0xf8, 0xf8, 0x38, 0x7,
    0x80, 0x7c, 0x7, 0xc0, 0x70, 0x0,

    /* U+003D "=" */
    0xff, 0xff, 0xf0, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0xfc,

    /* U+003E ">" */
    0x80, 0x1c, 0x1, 0xf0, 0xf, 0x80, 0x3e, 0x1,
    0xc1, 0xf1, 0xf0, 0xf8, 0x1c, 0x0, 0x0, 0x0,

    /* U+003F "?" */
    0x1f, 0x1f, 0xee, 0x1f, 0x3, 0x0, 0xc0, 0x30,
    0x1c, 0x6, 0x3, 0x1, 0x80, 0xc0, 0x30, 0xc,
    0x0, 0x0, 0x0, 0x30, 0xc, 0x0,

    /* U+0040 "@" */
    0x7, 0x80, 0xff, 0xe, 0x1c, 0xe6, 0x66, 0xfb,
    0xb6, 0x4f, 0x22, 0x7b, 0x13, 0xd8, 0x9e, 0xc4,
    0xf6, 0x6f, 0xbd, 0xee, 0xce, 0x30, 0x1, 0xc0,
    0x7, 0xf0, 0xf, 0x0,

    /* U+0041 "A" */
    0x6, 0x0, 0x38, 0x1, 0xc0, 0x1e, 0x0, 0xd8,
    0x6, 0xc0, 0x66, 0x3, 0x18, 0x18, 0xc1, 0xc6,
    0xc, 0x38, 0x7f, 0xc7, 0xfe, 0x30, 0x39, 0x80,
    0xdc, 0x6, 0xc0, 0x38,

    /* U+0042 "B" */
    0xff, 0x1f, 0xfb, 0x3, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x37, 0xfc, 0xff, 0xd8, 0x1b, 0x1, 0xe0,
    0x3c, 0x7, 0x80, 0xf0, 0x77, 0xfe, 0xff, 0x0,

    /* U+0043 "C" */
    0xf, 0x3, 0xfc, 0x70, 0xe6, 0x6, 0xc0, 0x7c,
    0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0, 0xc0,
    0xc, 0x0, 0xc0, 0x66, 0x6, 0x70, 0xe3, 0xfc,
    0xf, 0x0,

    /* U+0044 "D" */
    0xfe, 0x1f, 0xe3, 0xe, 0x60, 0x6c, 0xd, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xf, 0x1, 0xe0,
    0x3c, 0xd, 0x81, 0xb0, 0xe7, 0xf8, 0xfe, 0x0,

    /* U+0045 "E" */
    0xff, 0xff, 0xff, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x7, 0xfe, 0xff, 0xd8, 0x3, 0x0, 0x60,
    0xc, 0x1, 0x80, 0x30, 0x7, 0xff, 0xff, 0xe0,

    /* U+0046 "F" */
    0xff, 0xff, 0xff, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xff, 0xdf, 0xfb, 0x0, 0x60,
    0xc, 0x1, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x0,

    /* U+0047 "G" */
    0xf, 0x83, 0xfc, 0x70, 0xe6, 0x7, 0xe0, 0x3c,
    0x0, 0xc0, 0xc, 0x0, 0xc3, 0xfc, 0x3f, 0xc0,
    0x3c, 0x3, 0xe0, 0x36, 0x3, 0x30, 0x73, 0xfe,
    0xf, 0x80,

    /* U+0048 "H" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1f, 0xff, 0xff, 0xf8, 0xf, 0x1, 0xe0,
    0x3c, 0x7, 0x80, 0xf0, 0x1e, 0x3, 0xc0, 0x60,

    /* U+0049 "I" */
    0xff, 0xff, 0xf0, 0xc0, 0x30, 0xc, 0x3, 0x0,
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x30, 0xc,
    0x3, 0x0, 0xc3, 0xff, 0xff, 0xc0,

    /* U+004A "J" */
    0x0, 0x60, 0xc, 0x1, 0x80, 0x30, 0x6, 0x0,
    0xc0, 0x18, 0x3, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x3e, 0x6, 0xc1, 0xdc, 0x71, 0xfc, 0x1f, 0x0,

    /* U+004B "K" */
    0xc0, 0xec, 0x1c, 0xc1, 0x8c, 0x30, 0xc7, 0xc,
    0xe0, 0xdc, 0xd, 0x80, 0xfc, 0xf, 0xe0, 0xe6,
    0xc, 0x70, 0xc3, 0x8c, 0x18, 0xc1, 0xcc, 0xe,
    0xc0, 0x60,

    /* U+004C "L" */
    0xc0, 0x18, 0x3, 0x0, 0x60, 0xc, 0x1, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x60,
    0xc, 0x1, 0x80, 0x30, 0x7, 0xff, 0xff, 0xe0,

    /* U+004D "M" */
    0xe0, 0xfc, 0x1f, 0x87, 0xf8, 0xff, 0x1f, 0xa6,
    0xf6, 0xde, 0xdb, 0xce, 0x79, 0xcf, 0x39, 0xe2,
    0x3c, 0x7, 0x80, 0xf0, 0x1e, 0x3, 0xc0, 0x60,

    /* U+004E "N" */
    0xc0, 0x7c, 0xf, 0x81, 0xf8, 0x3f, 0x7, 0xb0,
    0xf7, 0x1e, 0x63, 0xce, 0x78, 0xcf, 0x1d, 0xe1,
    0xbc, 0x1f, 0x83, 0xf0, 0x3e, 0x7, 0xc0, 0x60,

    /* U+004F "O" */
    0xf, 0x3, 0xfc, 0x70, 0xe6, 0x6, 0xe0, 0x7c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0,
    0x3c, 0x3, 0xe0, 0x76, 0x6, 0x70, 0xe3, 0xfc,
    0xf, 0x0,

    /* U+0050 "P" */
    0xff, 0x1f, 0xfb, 0x3, 0x60, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x6, 0xff, 0xdf, 0xe3, 0x0, 0x60,
    0xc, 0x1, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x0,

    /* U+0051 "Q" */
    0xf, 0x3, 0xfc, 0x70, 0xe6, 0x6, 0xe0, 0x7c,
    0x3, 0xc0, 0x3c, 0x3, 0xc0, 0x3c, 0x3, 0xc0,
    0x3c, 0x3, 0xe0, 0x76, 0x6, 0x70, 0xe3, 0xfc,
    0xf, 0xc0, 0xf, 0x0, 0x30, 0x0,

    /* U+0052 "R" */
    0xff, 0x1f, 0xfb, 0x7, 0x60, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0xe, 0xff, 0x9f, 0xe3, 0xc, 0x61,
    0xcc, 0x19, 0x83, 0xb0, 0x36, 0x7, 0xc0, 0x60,

    /* U+0053 "S" */
    0xf, 0x83, 0xfc, 0x30, 0xe6, 0x7, 0x60, 0x36,
    0x0, 0x30, 0x1, 0xc0, 0xf, 0x80, 0x1e, 0x0,
    0x60, 0x3, 0x60, 0x36, 0x3, 0x70, 0x73, 0xfe,
    0xf, 0x80,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0xc1, 0x80, 0xc, 0x0, 0x60,
    0x3, 0x0, 0x18, 0x0, 0xc0, 0x6, 0x0, 0x30,
    0x1, 0x80, 0xc, 0x0, 0x60, 0x3, 0x0, 0x18,
    0x0, 0xc0, 0x6, 0x0,

    /* U+0055 "U" */
    0xc0, 0x78, 0xf, 0x1, 0xe0, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0xf, 0x1, 0xe0,
    0x3c, 0x7, 0xc1, 0xdc, 0x71, 0xfc, 0x1f, 0x0,

    /* U+0056 "V" */
    0xc0, 0x3e, 0x3, 0x60, 0x76, 0x6, 0x60, 0x63,
    0x6, 0x30, 0xc3, 0xc, 0x18, 0xc1, 0x98, 0x19,
    0x81, 0xd8, 0xf, 0x80, 0xf0, 0xf, 0x0, 0x70,
    0x6, 0x0,

    /* U+0057 "W" */
    0xc6, 0x1e, 0x38, 0xf1, 0xc7, 0x8e, 0x6c, 0x73,
    0x36, 0x99, 0xb4, 0xcd, 0xb6, 0x6d, 0xb3, 0x4d,
    0x9a, 0x6c, 0xf1, 0x47, 0x8e, 0x3c, 0x70, 0xe3,
    0x86, 0x1c, 0x30, 0xe0,

    /* U+0058 "X" */
    0xe0, 0x33, 0x83, 0x8c, 0x18, 0x71, 0xc1, 0x8c,
    0xe, 0xc0, 0x3e, 0x0, 0xe0, 0x7, 0x0, 0x78,
    0x3, 0x60, 0x3b, 0x1, 0x8c, 0x1c, 0x71, 0xc1,
    0x8c, 0xe, 0xe0, 0x30,

    /* U+0059 "Y" */
    0xc0, 0x3e, 0x7, 0x60, 0x67, 0xe, 0x30, 0xc3,
    0x9c, 0x19, 0x81, 0xf8, 0xf, 0x0, 0xf0, 0x6,
    0x0, 0x60, 0x6, 0x0, 0x60, 0x6, 0x0, 0x60,
    0x6, 0x0,

    /* U+005A "Z" */
    0xff, 0xff, 0xfc, 0x3, 0x80, 0xe0, 0x18, 0x7,
    0x0, 0xc0, 0x30, 0xe, 0x1, 0x80, 0x60, 0x1c,
    0x3, 0x0, 0xc0, 0x38, 0x7, 0xff, 0xff, 0xe0,

    /* U+005B "[" */
    0xff, 0xf1, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x8c,
    0x63, 0x18, 0xc6, 0x31, 0x8c, 0x7f, 0xe0,

    /* U+005C "\\" */
    0xc0, 0x60, 0x18, 0xc, 0x6, 0x1, 0x80, 0xc0,
    0x30, 0x18, 0xc, 0x3, 0x1, 0x80, 0xe0, 0x30,
    0x18, 0x6, 0x3, 0x1, 0x80, 0x60,

    /* U+005D "]" */
    0xff, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc6, 0x31,
    0x8c, 0x63, 0x18, 0xc6, 0x31, 0xff, 0xe0,

    /* U+005E "^" */
    0x18, 0xe, 0xf, 0x7, 0x83, 0x63, 0x31, 0x8d,
    0x86, 0xc3, 0x0,

    /* U+005F "_" */
    0xff, 0xff, 0xfc,

    /* U+0060 "`" */
    0xe3, 0x8c,

    /* U+0061 "a" */
    0x1f, 0x1f, 0xe6, 0x1f, 0x3, 0x0, 0xc7, 0xf7,
    0xff, 0x83, 0xc0, 0xf0, 0x3e, 0x1d, 0xff, 0x3c,
    0xc0,

    /* U+0062 "b" */
    0xc0, 0x18, 0x3, 0x0, 0x60, 0xc, 0x1, 0xbe,
    0x3f, 0xe7, 0xe, 0xc0, 0xf8, 0xf, 0x1, 0xe0,
    0x3c, 0x7, 0x80, 0xf0, 0x3f, 0xe, 0xff, 0x9b,
    0xe0,

    /* U+0063 "c" */
    0x1f, 0x7, 0xf9, 0xc3, 0x70, 0x3c, 0x7, 0x80,
    0x30, 0x6, 0x0, 0xc0, 0x1c, 0xd, 0xc3, 0x1f,
    0xe1, 0xf0,

    /* U+0064 "d" */
    0x0, 0x60, 0xc, 0x1, 0x80, 0x30, 0x6, 0x3e,
    0xcf, 0xfb, 0x87, 0xe0, 0x78, 0xf, 0x1, 0xe0,
    0x3c, 0x7, 0x80, 0xf8, 0x1b, 0x87, 0x3f, 0xe3,
    0xec,

    /* U+0065 "e" */
    0x1f, 0x7, 0xf1, 0xc3, 0x30, 0x3c, 0x7, 0xff,
    0xff, 0xfe, 0x0, 0xc0, 0x1c, 0x9, 0xc3, 0x9f,
    0xe1, 0xf0,

    /* U+0066 "f" */
    0x3, 0xf0, 0x7f, 0xe, 0x0, 0xc0, 0xc, 0x0,
    0xc0, 0xff, 0xef, 0xfe, 0xc, 0x0, 0xc0, 0xc,
    0x0, 0xc0, 0xc, 0x0, 0xc0, 0xc, 0x0, 0xc0,
    0xc, 0x0, 0xc0, 0xc, 0x0,

    /* U+0067 "g" */
    0x1f, 0x67, 0xfd, 0xc3, 0xf0, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x7c, 0xd, 0xc3, 0x9f,
    0xf1, 0xf6, 0x0, 0xd0, 0x3b, 0xe, 0x7f, 0xc3,
    0xe0,

    /* U+0068 "h" */
    0xc0, 0x30, 0xc, 0x3, 0x0, 0xc0, 0x33, 0xcd,
    0xfb, 0x87, 0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0,
    0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x30,

    /* U+0069 "i" */
    0xc, 0x1, 0x80, 0x0, 0x0, 0xf, 0xc1, 0xf8,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0x30, 0x6,
    0x0, 0xc0, 0x18, 0x3, 0x7, 0xff, 0xff, 0xe0,

    /* U+006A "j" */
    0x6, 0xc, 0x0, 0x7, 0xef, 0xc1, 0x83, 0x6,
    0xc, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x6, 0xc,
    0x18, 0x6f, 0xdf, 0x0,

    /* U+006B "k" */
    0xc0, 0x18, 0x3, 0x0, 0x60, 0xc, 0x1, 0x83,
    0xb0, 0xe6, 0x38, 0xce, 0x1b, 0x83, 0xe0, 0x7e,
    0xe, 0xe1, 0x8c, 0x30, 0xc6, 0x1c, 0xc1, 0xd8,
    0x1c,

    /* U+006C "l" */
    0xfc, 0x1f, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x3, 0x0, 0x60, 0xc, 0x1, 0x80, 0x30, 0x6,
    0x0, 0xc0, 0x18, 0x3, 0x0, 0x60, 0xff, 0xff,
    0xfc,

    /* U+006D "m" */
    0xdc, 0xef, 0xff, 0xc6, 0x3c, 0x63, 0xc6, 0x3c,
    0x63, 0xc6, 0x3c, 0x63, 0xc6, 0x3c, 0x63, 0xc6,
    0x3c, 0x63, 0xc6, 0x30,

    /* U+006E "n" */
    0xcf, 0x37, 0xee, 0x1f, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0,
    0xc0,

    /* U+006F "o" */
    0x1f, 0x7, 0xf1, 0xc7, 0x30, 0x6c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x7c, 0x19, 0xc7, 0x1f,
    0xc1, 0xf0,

    /* U+0070 "p" */
    0xdf, 0x1f, 0xf3, 0x87, 0x60, 0x7c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x78, 0x1f, 0x87, 0x7f,
    0xcd, 0xf1, 0x80, 0x30, 0x6, 0x0, 0xc0, 0x18,
    0x0,

    /* U+0071 "q" */
    0x1f, 0x67, 0xfd, 0xc3, 0xf0, 0x3c, 0x7, 0x80,
    0xf0, 0x1e, 0x3, 0xc0, 0x7c, 0xd, 0xc3, 0x9f,
    0xf1, 0xf6, 0x0, 0xc0, 0x18, 0x3, 0x0, 0x60,
    0xc,

    /* U+0072 "r" */
    0xcf, 0xef, 0xbc, 0x1c, 0xc, 0x6, 0x3, 0x1,
    0x80, 0xc0, 0x60, 0x30, 0x18, 0xc, 0x0,

    /* U+0073 "s" */
    0x1f, 0x7, 0xf9, 0xc3, 0xb0, 0x36, 0x0, 0x70,
    0x7, 0xe0, 0xe, 0x0, 0x78, 0xf, 0x83, 0xbf,
    0xe1, 0xf0,

    /* U+0074 "t" */
    0x18, 0x6, 0x1, 0x83, 0xff, 0xff, 0xc6, 0x1,
    0x80, 0x60, 0x18, 0x6, 0x1, 0x80, 0x60, 0x18,
    0x7, 0x0, 0xfc, 0x1f,

    /* U+0075 "u" */
    0xc0, 0xf0, 0x3c, 0xf, 0x3, 0xc0, 0xf0, 0x3c,
    0xf, 0x3, 0xc0, 0xf0, 0x3e, 0x1d, 0xff, 0x3c,
    0xc0,

    /* U+0076 "v" */
    0xe0, 0x36, 0x7, 0x60, 0x63, 0x6, 0x30, 0xc3,
    0xc, 0x18, 0xc1, 0x98, 0xd, 0x80, 0xd0, 0xf,
    0x0, 0x70, 0x6, 0x0,

    /* U+0077 "w" */
    0xc6, 0x1e, 0x30, 0xf1, 0xc5, 0x8e, 0x6c, 0xf3,
    0x26, 0x99, 0xb6, 0xcd, 0x34, 0x79, 0xa1, 0xc7,
    0xe, 0x38, 0x61, 0xc3, 0xc, 0x0,

    /* U+0078 "x" */
    0x60, 0x73, 0x6, 0x38, 0xc1, 0x9c, 0xf, 0x80,
    0xf0, 0x7, 0x0, 0xf0, 0xd, 0x81, 0x9c, 0x38,
    0xe7, 0x6, 0x60, 0x70,

    /* U+0079 "y" */
    0xc0, 0x37, 0x1, 0x98, 0x18, 0xe0, 0xc3, 0xe,
    0x1c, 0x60, 0x63, 0x3, 0x30, 0xd, 0x80, 0x78,
    0x3, 0xc0, 0xe, 0x0, 0x60, 0x3, 0x0, 0x30,
    0x3, 0x80, 0x78, 0x3, 0x80, 0x0,

    /* U+007A "z" */
    0xff, 0xdf, 0xf8, 0x6, 0x1, 0xc0, 0x70, 0x1c,
    0x3, 0x0, 0xc0, 0x38, 0xe, 0x1, 0x80, 0x7f,
    0xff, 0xfe,

    /* U+007B "{" */
    0x3, 0x7, 0x6, 0xc, 0xc, 0xc, 0xc, 0xc,
    0xc, 0x18, 0xf0, 0xf0, 0x18, 0xc, 0xc, 0xc,
    0xc, 0xc, 0xc, 0xc, 0x6, 0x7, 0x3,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0x60, 0x38, 0xc, 0x3, 0x1, 0x80, 0xc0, 0x60,
    0x30, 0x18, 0x6, 0x1, 0xe0, 0xf0, 0xc0, 0xc0,
    0x60, 0x30, 0x18, 0xc, 0x6, 0x3, 0x3, 0x3,
    0x81, 0x80,

    /* U+007E "~" */
    0x3c, 0x1, 0xf8, 0x2c, 0x71, 0xb0, 0xfe, 0x0,
    0xf0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 230, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 230, .box_w = 2, .box_h = 17, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 6, .adv_w = 230, .box_w = 6, .box_h = 5, .ofs_x = 4, .ofs_y = 13},
    {.bitmap_index = 10, .adv_w = 230, .box_w = 13, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 38, .adv_w = 230, .box_w = 11, .box_h = 22, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 69, .adv_w = 230, .box_w = 14, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 230, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 230, .box_w = 2, .box_h = 5, .ofs_x = 6, .ofs_y = 13},
    {.bitmap_index = 127, .adv_w = 230, .box_w = 6, .box_h = 25, .ofs_x = 4, .ofs_y = -6},
    {.bitmap_index = 146, .adv_w = 230, .box_w = 6, .box_h = 25, .ofs_x = 4, .ofs_y = -6},
    {.bitmap_index = 165, .adv_w = 230, .box_w = 12, .box_h = 12, .ofs_x = 2, .ofs_y = 5},
    {.bitmap_index = 183, .adv_w = 230, .box_w = 12, .box_h = 12, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 201, .adv_w = 230, .box_w = 3, .box_h = 7, .ofs_x = 4, .ofs_y = -4},
    {.bitmap_index = 204, .adv_w = 230, .box_w = 9, .box_h = 2, .ofs_x = 3, .ofs_y = 7},
    {.bitmap_index = 207, .adv_w = 230, .box_w = 3, .box_h = 3, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 230, .box_w = 9, .box_h = 19, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 231, .adv_w = 230, .box_w = 11, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 230, .box_w = 7, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 270, .adv_w = 230, .box_w = 11, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 294, .adv_w = 230, .box_w = 11, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 318, .adv_w = 230, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 344, .adv_w = 230, .box_w = 11, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 230, .box_w = 11, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 392, .adv_w = 230, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 418, .adv_w = 230, .box_w = 11, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 442, .adv_w = 230, .box_w = 11, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 466, .adv_w = 230, .box_w = 3, .box_h = 13, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 471, .adv_w = 230, .box_w = 4, .box_h = 17, .ofs_x = 5, .ofs_y = -4},
    {.bitmap_index = 480, .adv_w = 230, .box_w = 10, .box_h = 11, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 494, .adv_w = 230, .box_w = 10, .box_h = 7, .ofs_x = 2, .ofs_y = 4},
    {.bitmap_index = 503, .adv_w = 230, .box_w = 11, .box_h = 11, .ofs_x = 2, .ofs_y = 2},
    {.bitmap_index = 519, .adv_w = 230, .box_w = 10, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 541, .adv_w = 230, .box_w = 13, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 569, .adv_w = 230, .box_w = 13, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 597, .adv_w = 230, .box_w = 11, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 621, .adv_w = 230, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 647, .adv_w = 230, .box_w = 11, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 230, .box_w = 11, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 695, .adv_w = 230, .box_w = 11, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 719, .adv_w = 230, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 745, .adv_w = 230, .box_w = 11, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 769, .adv_w = 230, .box_w = 10, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 791, .adv_w = 230, .box_w = 11, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 815, .adv_w = 230, .box_w = 12, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 841, .adv_w = 230, .box_w = 11, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 865, .adv_w = 230, .box_w = 11, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 889, .adv_w = 230, .box_w = 11, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 913, .adv_w = 230, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 939, .adv_w = 230, .box_w = 11, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 963, .adv_w = 230, .box_w = 12, .box_h = 20, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 993, .adv_w = 230, .box_w = 11, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1017, .adv_w = 230, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1043, .adv_w = 230, .box_w = 13, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1071, .adv_w = 230, .box_w = 11, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1095, .adv_w = 230, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1121, .adv_w = 230, .box_w = 13, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1149, .adv_w = 230, .box_w = 13, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1177, .adv_w = 230, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1203, .adv_w = 230, .box_w = 11, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1227, .adv_w = 230, .box_w = 5, .box_h = 23, .ofs_x = 5, .ofs_y = -4},
    {.bitmap_index = 1242, .adv_w = 230, .box_w = 9, .box_h = 19, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 1264, .adv_w = 230, .box_w = 5, .box_h = 23, .ofs_x = 4, .ofs_y = -4},
    {.bitmap_index = 1279, .adv_w = 230, .box_w = 9, .box_h = 9, .ofs_x = 3, .ofs_y = 8},
    {.bitmap_index = 1290, .adv_w = 230, .box_w = 11, .box_h = 2, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 1293, .adv_w = 230, .box_w = 5, .box_h = 3, .ofs_x = 5, .ofs_y = 14},
    {.bitmap_index = 1295, .adv_w = 230, .box_w = 10, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1312, .adv_w = 230, .box_w = 11, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1337, .adv_w = 230, .box_w = 11, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1355, .adv_w = 230, .box_w = 11, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1380, .adv_w = 230, .box_w = 11, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1398, .adv_w = 230, .box_w = 12, .box_h = 19, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1427, .adv_w = 230, .box_w = 11, .box_h = 18, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 1452, .adv_w = 230, .box_w = 10, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1475, .adv_w = 230, .box_w = 11, .box_h = 17, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1499, .adv_w = 230, .box_w = 7, .box_h = 22, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 1519, .adv_w = 230, .box_w = 11, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1544, .adv_w = 230, .box_w = 11, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1569, .adv_w = 230, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1589, .adv_w = 230, .box_w = 10, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1606, .adv_w = 230, .box_w = 11, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1624, .adv_w = 230, .box_w = 11, .box_h = 18, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 1649, .adv_w = 230, .box_w = 11, .box_h = 18, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 1674, .adv_w = 230, .box_w = 9, .box_h = 13, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1689, .adv_w = 230, .box_w = 11, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1707, .adv_w = 230, .box_w = 10, .box_h = 16, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1727, .adv_w = 230, .box_w = 10, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1744, .adv_w = 230, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1764, .adv_w = 230, .box_w = 13, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1786, .adv_w = 230, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1806, .adv_w = 230, .box_w = 13, .box_h = 18, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1836, .adv_w = 230, .box_w = 11, .box_h = 13, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1854, .adv_w = 230, .box_w = 8, .box_h = 23, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 1877, .adv_w = 230, .box_w = 2, .box_h = 22, .ofs_x = 6, .ofs_y = -5},
    {.bitmap_index = 1883, .adv_w = 230, .box_w = 9, .box_h = 23, .ofs_x = 3, .ofs_y = -4},
    {.bitmap_index = 1909, .adv_w = 230, .box_w = 14, .box_h = 5, .ofs_x = 1, .ofs_y = 5}
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
const lv_font_t robotomono_24 = {
#else
lv_font_t robotomono_24 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 26,          /*The maximum line height required by the font*/
    .base_line = 6,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if ROBOTOMONO_24*/

