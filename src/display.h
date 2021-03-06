#pragma once

/*
 * this function will init the display
 */
void display_init();

/*
 * this function will write a display where x1 y1 is the top left pixel and x2 y2 is the top right pixel
 */
void writesquare(uint8_t x1, uint8_t y1, uint8_t x2, uint8_t y2, uint16_t color);

/*
 * placeholder for actual brightness control, 0 = off and > 1 is 100%
 */
void display_backlight(char brightness);
