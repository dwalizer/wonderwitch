#include <stdlib.h>
#include <sys/bios.h>

#include "smile.h"

#define FONT_SMILE 0

#define POSITION_X 8
#define POSITION_Y 8

void draw_smile(BYTE screen)
{
    WORD font = FONT_SMILE;
    int dx;
    int dy;

    for (dy = 0; dy < smile_height; dy++) {
        for (dx = 0; dx < smile_width; dx++, font++) {
            screen_fill_char(screen, POSITION_X + dx, POSITION_Y + dy, 1, 1, font);
        }
    }
}

void main(int argc, char *argv[])
{
    font_set_monodata(FONT_SMILE, 16, bmp_smile);

    draw_smile(SCREEN2);

    key_wait();
}
