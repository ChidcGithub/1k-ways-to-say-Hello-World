#include <stdio.h>
#define GREET(...) printf(__VA_ARGS__)
int main(void) { GREET("Hello, World!\n"); return 0; }
