#include <stdlib.h>
#include <sys/bios.h>

void main() {
	int quit = 0, x = 0, y = 0;

	text_set_screen(SCREEN1);
	text_screen_init();
	text_set_screen(SCREEN2);
    text_screen_init();
    text_put_string(x, y, "Hello!");

	do {
		switch(key_hit_check_with_repeat()) {
			case KEY_LEFT1:
				screen_set_scroll(SCREEN2, x++, y);
				break;
			case KEY_RIGHT1:
				screen_set_scroll(SCREEN2, x--, y);
				break;
			case KEY_DOWN1:
				screen_set_scroll(SCREEN2, x, y--);
				break;
			case KEY_UP1:
				screen_set_scroll(SCREEN2, x, y++);
				break;			
			case KEY_START:
				quit = 1;
				break;
			default:
				break;
		}
		sys_wait(1);
	} while(!quit);
}