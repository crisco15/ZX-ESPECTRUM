#include "ESP32Lib/Graphics/Font.h"

unsigned char Font6x8Pixels[] = {
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   255, 0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   255, 0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   255, 0,   255, 0,   0, 0,   255, 0,   255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   255, 0,   255, 0,   0, 255, 255, 255, 255, 255, 0, 0,   255, 0,   255, 0,   0,
    255, 255, 255, 255, 255, 0, 0,   255, 0,   255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   255, 0,   0,   0, 0,   255, 255, 255, 0,   0, 255, 0,   255, 0,   0,   0, 0,   255, 255, 255, 0,   0,
    0,   0,   255, 0,   255, 0, 0,   255, 255, 255, 0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 255, 0,   0,   255, 0, 255, 255, 0,   255, 0,   0, 0,   0,   255, 0,   0,   0,
    0,   255, 0,   255, 255, 0, 255, 0,   0,   255, 255, 0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   255, 0,   0,   0,   0, 255, 0,   255, 0,   0,   0, 0,   255, 255, 0,   255, 0,
    255, 0,   0,   255, 0,   0, 0,   255, 255, 0,   255, 0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   255, 0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   255, 255, 0,   0, 0,   255, 0,   0,   0,   0, 0,   255, 0,   0,   0,   0, 0,   255, 0,   0,   0,   0,
    0,   255, 0,   0,   0,   0, 0,   255, 0,   0,   0,   0, 0,   0,   255, 255, 0,   0, 0,   0,   0,   0,   0,   0,
    0,   255, 255, 0,   0,   0, 0,   0,   0,   255, 0,   0, 0,   0,   0,   255, 0,   0, 0,   0,   0,   255, 0,   0,
    0,   0,   0,   255, 0,   0, 0,   0,   0,   255, 0,   0, 0,   255, 255, 0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   255, 0,   255, 0,   0, 0,   0,   255, 0,   0,   0,
    0,   255, 0,   255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   255, 255, 255, 0,   0,
    0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   255, 255, 255, 0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   255, 0,   0, 0,   0,   0,   255, 0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   255, 0,   0,   0,
    0,   255, 0,   0,   0,   0, 0,   255, 0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   255, 0,   255, 0,   0, 0,   255, 0,   255, 0,   0,
    0,   255, 0,   255, 0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   255, 255, 0,   0,   0, 0,   0,   255, 0,   0,   0,
    0,   0,   255, 0,   0,   0, 0,   255, 255, 255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   255, 255, 0,   0,   0, 0,   0,   0,   255, 0,   0, 0,   0,   255, 0,   0,   0,
    0,   255, 0,   0,   0,   0, 0,   255, 255, 255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   255, 255, 0,   0,   0, 0,   0,   0,   255, 0,   0, 0,   0,   255, 0,   0,   0,
    0,   0,   0,   255, 0,   0, 0,   255, 255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   255, 0,   0,   0,   0, 255, 0,   0,   0,   0,   0, 255, 0,   255, 0,   0,   0,
    255, 255, 255, 255, 0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   255, 255, 255, 0,   0, 0,   255, 0,   0,   0,   0, 0,   255, 255, 0,   0,   0,
    0,   0,   0,   255, 0,   0, 0,   255, 255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   255, 255, 0,   0, 0,   255, 0,   0,   0,   0, 0,   255, 255, 0,   0,   0,
    0,   255, 0,   255, 0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   255, 255, 255, 0,   0, 0,   0,   0,   255, 0,   0, 0,   0,   0,   255, 0,   0,
    0,   0,   255, 0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   255, 0,   255, 0,   0, 0,   0,   255, 0,   0,   0,
    0,   255, 0,   255, 0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   255, 0,   255, 0,   0, 0,   0,   255, 255, 0,   0,
    0,   0,   0,   255, 0,   0, 0,   255, 255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   255, 0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   255, 0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   255, 0,   0,   0,   0,
    0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   255, 255, 255, 0,   0, 0,   0,   0,   0,   0,   0,
    0,   255, 255, 255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   255, 0,   0,
    0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   255, 255, 0,   0,   0, 0,   0,   0,   255, 0,   0, 0,   0,   255, 0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   255, 255, 255, 0,   0, 255, 0,   0,   0,   255, 0, 255, 0,   255, 255, 255, 0, 255, 0,   255, 255, 0,   0,
    255, 0,   0,   0,   0,   0, 0,   255, 255, 255, 255, 0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   255, 255, 0,   0,   0, 255, 0,   0,   255, 0,   0, 255, 255, 255, 255, 0,   0,
    255, 0,   0,   255, 0,   0, 255, 0,   0,   255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 255, 255, 0,   0,   0, 255, 0,   0,   255, 0,   0, 255, 255, 255, 0,   0,   0,
    255, 0,   0,   255, 0,   0, 255, 255, 255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   255, 255, 255, 0,   0, 255, 0,   0,   0,   0,   0, 255, 0,   0,   0,   0,   0,
    255, 0,   0,   0,   0,   0, 0,   255, 255, 255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 255, 255, 0,   0,   0, 255, 0,   0,   255, 0,   0, 255, 0,   0,   255, 0,   0,
    255, 0,   0,   255, 0,   0, 255, 255, 255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 255, 255, 255, 0,   0, 255, 0,   0,   0,   0,   0, 255, 255, 0,   0,   0,   0,
    255, 0,   0,   0,   0,   0, 255, 255, 255, 255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 255, 255, 255, 0,   0, 255, 0,   0,   0,   0,   0, 255, 255, 255, 0,   0,   0,
    255, 0,   0,   0,   0,   0, 255, 0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   255, 255, 255, 0,   0, 255, 0,   0,   0,   0,   0, 255, 0,   255, 255, 0,   0,
    255, 0,   0,   0,   255, 0, 0,   255, 255, 255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 0,   0,   255, 0,   0, 255, 0,   0,   255, 0,   0, 255, 255, 255, 255, 0,   0,
    255, 0,   0,   255, 0,   0, 255, 0,   0,   255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   255, 255, 255, 0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   255, 0,   0,   0,
    0,   0,   255, 0,   0,   0, 0,   255, 255, 255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 255, 255, 255, 0,   0, 0,   0,   0,   255, 0,   0, 0,   0,   0,   255, 0,   0,
    0,   0,   0,   255, 0,   0, 0,   0,   0,   255, 0,   0, 255, 0,   0,   255, 0,   0, 0,   255, 255, 0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 0,   0,   255, 0,   0, 255, 0,   0,   255, 0,   0, 255, 255, 255, 0,   0,   0,
    255, 0,   0,   255, 0,   0, 255, 0,   0,   255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 0,   0,   0,   0,   0, 255, 0,   0,   0,   0,   0, 255, 0,   0,   0,   0,   0,
    255, 0,   0,   0,   0,   0, 255, 255, 255, 255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 0,   0,   0,   255, 0, 255, 255, 0,   255, 255, 0, 255, 0,   255, 0,   255, 0,
    255, 0,   0,   0,   255, 0, 255, 0,   0,   0,   255, 0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 0,   0,   0,   255, 0, 255, 255, 0,   0,   255, 0, 255, 0,   255, 0,   255, 0,
    255, 0,   0,   255, 255, 0, 255, 0,   0,   0,   255, 0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   255, 255, 0,   0,   0, 255, 0,   0,   255, 0,   0, 255, 0,   0,   255, 0,   0,
    255, 0,   0,   255, 0,   0, 0,   255, 255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 255, 255, 0,   0,   0, 255, 0,   0,   255, 0,   0, 255, 255, 255, 0,   0,   0,
    255, 0,   0,   0,   0,   0, 255, 0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   255, 255, 0,   0,   0, 255, 0,   0,   255, 0,   0, 255, 0,   0,   255, 0,   0,
    255, 0,   255, 255, 0,   0, 0,   255, 255, 255, 0,   0, 0,   0,   0,   0,   255, 0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 255, 255, 0,   0,   0, 255, 0,   0,   255, 0,   0, 255, 255, 255, 0,   0,   0,
    255, 0,   0,   255, 0,   0, 255, 0,   0,   255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   255, 255, 255, 0,   0, 255, 0,   0,   0,   0,   0, 0,   255, 255, 0,   0,   0,
    0,   0,   0,   255, 0,   0, 255, 255, 255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 255, 255, 255, 255, 0, 0,   0,   255, 0,   0,   0, 0,   0,   255, 0,   0,   0,
    0,   0,   255, 0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 0,   0,   255, 0,   0, 255, 0,   0,   255, 0,   0, 255, 0,   0,   255, 0,   0,
    255, 0,   0,   255, 0,   0, 0,   255, 255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 0,   0,   0,   255, 0, 255, 0,   0,   0,   255, 0, 255, 0,   0,   0,   255, 0,
    0,   255, 0,   255, 0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 0,   0,   0,   255, 0, 255, 0,   0,   0,   255, 0, 255, 0,   255, 0,   255, 0,
    255, 255, 0,   255, 255, 0, 255, 0,   0,   0,   255, 0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 0,   0,   0,   255, 0, 0,   255, 0,   255, 0,   0, 0,   0,   255, 0,   0,   0,
    0,   255, 0,   255, 0,   0, 255, 0,   0,   0,   255, 0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 0,   0,   0,   255, 0, 255, 0,   0,   0,   255, 0, 0,   255, 0,   255, 0,   0,
    0,   0,   255, 0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 255, 255, 255, 255, 0, 0,   0,   0,   255, 0,   0, 0,   0,   255, 0,   0,   0,
    0,   255, 0,   0,   0,   0, 255, 255, 255, 255, 255, 0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   255, 255, 255, 0,   0, 0,   255, 0,   0,   0,   0, 0,   255, 0,   0,   0,   0, 0,   255, 0,   0,   0,   0,
    0,   255, 0,   0,   0,   0, 0,   255, 0,   0,   0,   0, 0,   255, 255, 255, 0,   0, 0,   0,   0,   0,   0,   0,
    0,   255, 0,   0,   0,   0, 0,   255, 0,   0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   255, 0,   0,   0,
    0,   0,   0,   255, 0,   0, 0,   0,   0,   255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   255, 255, 255, 0,   0, 0,   0,   0,   255, 0,   0, 0,   0,   0,   255, 0,   0, 0,   0,   0,   255, 0,   0,
    0,   0,   0,   255, 0,   0, 0,   0,   0,   255, 0,   0, 0,   255, 255, 255, 0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   255, 0,   0,   0, 0,   255, 0,   255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   255, 255, 255, 0,   0, 0,   0,   0,   0,   0,   0,
    0,   255, 0,   0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   255, 255, 0,   0,   0, 255, 0,   0,   255, 0,   0,
    255, 0,   0,   255, 0,   0, 0,   255, 255, 255, 255, 0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 0,   0,   0,   0,   0, 255, 255, 255, 0,   0,   0, 255, 0,   0,   255, 0,   0,
    255, 0,   0,   255, 0,   0, 0,   255, 255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   255, 255, 0,   0,   0, 255, 0,   0,   0,   0,   0,
    255, 0,   0,   0,   0,   0, 0,   255, 255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   255, 0,   0, 0,   255, 255, 255, 0,   0, 255, 0,   0,   255, 0,   0,
    255, 0,   0,   255, 0,   0, 0,   255, 255, 255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   255, 255, 0,   0,   0, 255, 0,   255, 255, 0,   0,
    255, 255, 0,   0,   0,   0, 0,   255, 255, 255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   255, 255, 0,   0, 0,   255, 0,   0,   0,   0,
    0,   255, 0,   0,   0,   0, 0,   255, 255, 0,   0,   0, 0,   255, 0,   0,   0,   0, 0,   255, 0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   255, 255, 0,   0,   0, 255, 0,   0,   255, 0,   0,
    255, 0,   0,   255, 0,   0, 0,   255, 255, 255, 0,   0, 0,   0,   0,   255, 0,   0, 0,   255, 255, 0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 0,   0,   0,   0,   0, 255, 0,   255, 0,   0,   0, 255, 255, 0,   255, 0,   0,
    255, 0,   0,   255, 0,   0, 255, 0,   0,   255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   255, 0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   255, 0,   0,   0,   0,
    0,   255, 0,   0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   255, 0,   0,   0,
    0,   0,   255, 0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   255, 0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 255, 0,   0,   0,   0,   0, 255, 0,   255, 255, 0,   0, 255, 255, 0,   0,   0,   0,
    255, 0,   255, 0,   0,   0, 255, 0,   0,   255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   255, 0,   0,   0,   0, 0,   255, 0,   0,   0,   0, 0,   255, 0,   0,   0,   0,
    0,   255, 0,   0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 255, 255, 0,   255, 0,   0, 255, 0,   255, 0,   255, 0,
    255, 0,   255, 0,   255, 0, 255, 0,   0,   0,   255, 0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 255, 0,   255, 0,   0,   0, 255, 255, 0,   255, 0,   0,
    255, 0,   0,   255, 0,   0, 255, 0,   0,   255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   255, 255, 0,   0,   0, 255, 0,   0,   255, 0,   0,
    255, 0,   0,   255, 0,   0, 0,   255, 255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 255, 255, 255, 0,   0,   0, 255, 0,   0,   255, 0,   0,
    255, 0,   0,   255, 0,   0, 255, 255, 255, 0,   0,   0, 255, 0,   0,   0,   0,   0, 255, 0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   255, 255, 255, 0,   0, 255, 0,   0,   255, 0,   0,
    255, 0,   0,   255, 0,   0, 0,   255, 255, 255, 0,   0, 0,   0,   0,   255, 0,   0, 0,   0,   0,   255, 0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   255, 255, 0,   0, 0,   255, 0,   0,   0,   0,
    0,   255, 0,   0,   0,   0, 0,   255, 0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   255, 255, 0,   0, 0,   255, 255, 0,   0,   0,
    0,   0,   0,   255, 0,   0, 0,   255, 255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   255, 0,   0,   0,   0, 255, 255, 255, 0,   0,   0, 0,   255, 0,   0,   0,   0,
    0,   255, 0,   0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 255, 0,   0,   255, 0,   0, 255, 0,   0,   255, 0,   0,
    255, 0,   0,   255, 0,   0, 0,   255, 255, 255, 255, 0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   255, 0,   0,   255, 0, 0,   255, 0,   0,   255, 0,
    0,   255, 0,   255, 0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 255, 0,   0,   0,   255, 0, 255, 0,   0,   0,   255, 0,
    255, 0,   255, 0,   255, 0, 0,   255, 0,   255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   255, 0,   255, 0,   0, 0,   0,   255, 0,   0,   0,
    0,   255, 0,   255, 0,   0, 255, 0,   0,   255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 255, 0,   0,   255, 0,   0, 255, 0,   0,   255, 0,   0,
    255, 0,   0,   255, 0,   0, 0,   255, 255, 255, 0,   0, 0,   0,   0,   255, 0,   0, 0,   255, 255, 0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 255, 255, 255, 255, 0,   0, 0,   0,   255, 0,   0,   0,
    0,   255, 0,   0,   0,   0, 255, 255, 255, 255, 0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   255, 255, 0,   0, 0,   255, 0,   0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   255, 255, 0,   0,   0,
    0,   0,   255, 0,   0,   0, 0,   255, 0,   0,   0,   0, 0,   0,   255, 255, 0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   255, 0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   255, 0,   0,   0,
    0,   0,   255, 0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   255, 255, 0,   0,   0, 0,   0,   0,   255, 0,   0, 0,   0,   255, 0,   0,   0, 0,   0,   255, 255, 0,   0,
    0,   0,   255, 0,   0,   0, 0,   0,   0,   255, 0,   0, 0,   255, 255, 0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   255, 0,   255, 0,   0, 255, 0,   255, 0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0, 0,   0,   0,   0,   0,   0,
};

Font Font6x8(6, 8, Font6x8Pixels, 32, 96);
