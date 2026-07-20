#include <stdio.h>
int main(void) {
    /* Real bare-metal code (commented for compilation):
    volatile char *vga = (volatile char*)0xB8000;
    const char *msg = "Hello, World!";
    for (int i = 0; msg[i]; i++) {
        vga[i * 2] = msg[i];
        vga[i * 2 + 1] = 0x07;
    }
    */
    printf("[Bare-metal VGA]: Hello, World!\n");
    return 0;
}
