#define _POSIX_C_SOURCE 200809L
#include <unistd.h>
int main(void) { write(1, "Hello, World!\n", 14); return 0; }
