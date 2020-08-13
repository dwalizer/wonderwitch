#include <sys/bios.h>

void main() {
    text_screen_init();
    text_put_string(0, 0, "Hello world!");
    key_wait();
}