#include <stdio.h>
#include <sys/bios.h>
#include <sys/libwwc.h>

void init_color()
{
    if (wwc_get_hardarch() == HARDARCH_WSC) {
		wwc_set_color_mode(COLOR_MODE_4COLOR);
		wwc_palette_set_color(0, 0, 0x0000);	/* white */
		wwc_palette_set_color(0, 1, 0x000f);	/* blue */
		wwc_palette_set_color(0, 2, 0x0f00);	/* red */
		wwc_palette_set_color(0, 3, 0x0fff);	/* black */
    }
}

void main() {
	int quit = 0;

    text_screen_init();

	init_color();

    text_put_string(0, 0, "Please press a button to");
	text_put_string(0, 1, "to change the text color");
	text_put_string(0, 2, "Press start to quit.");

	while(quit == 0) {
		switch(key_wait()) {
			case KEY_UP1:
				font_set_color(0x00);
				break;
			case KEY_DOWN1:
				font_set_color(0x01);
				break;
			case KEY_LEFT1:
				font_set_color(0x02);
				break;
			case KEY_RIGHT1:
				font_set_color(0x03);
				break;
			case KEY_START:
				quit = 1;
				break;
		}

		text_put_string(0, 4, "Hello!");
	}
}