#include <stdio.h>
void greet(void) { printf("Hello, World!\n"); }
int main(void) { void (*fp)(void) = greet; fp(); return 0; }
