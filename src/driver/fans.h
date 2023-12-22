#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

typedef struct {
    uint8_t top;
    uint8_t left;
    uint8_t right;
} fan_speed_t;

void fans_top_setspeed(uint8_t speed);
void fans_left_setspeed(uint8_t speed);
void fans_right_setspeed(uint8_t speed);

extern fan_speed_t fan_speed;

#ifdef __cplusplus
}
#endif
