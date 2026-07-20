#include <stdio.h>
#define GREET_FUNC(name) void greet_##name(void) { printf("Hello, World!\n"); }
GREET_FUNC(hello)
int main(void) { greet_hello(); return 0; }
