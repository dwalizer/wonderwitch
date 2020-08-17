#include <stdio.h>
#include <sys/bios.h>

void main() {
	int quit = 0;

    text_screen_init();
    text_put_string(0, 0, "Please press a button.");
	text_put_string(0, 1, "Press start to quit.");

	while(quit == 0) {
		switch(key_wait()) {
			case KEY_UP1:
				text_put_string(0, 3, "UP   ");
				break;
			case KEY_DOWN1:
				text_put_string(0, 3, "DOWN ");
				break;
			case KEY_LEFT1:
				text_put_string(0, 3, "LEFT ");
				break;
			case KEY_RIGHT1:
				text_put_string(0, 3, "RIGHT");
				break;
			case KEY_START:
				text_put_string(0, 3, "START");
				quit = 1;
				break;
			case KEY_Y1:
				text_put_string(0, 3, "Y1   ");
				break;
			case KEY_Y2:
				text_put_string(0, 3, "Y2   ");
				break;
			case KEY_Y3:
				text_put_string(0, 3, "Y3   ");
				break;
			case KEY_Y4:
				text_put_string(0, 3, "Y4   ");
				break;
		}
	}
}