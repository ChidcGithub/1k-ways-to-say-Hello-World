#include <stdio.h>
int main(void) { const char *s = "Hello, World!\n"; while (*s) fputc(*s++, stderr); return 0; }
