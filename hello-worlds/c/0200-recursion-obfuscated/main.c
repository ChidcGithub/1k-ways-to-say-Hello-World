#include <stdio.h>
void print_rec(const char *s) {
    if (*s) { putchar(*s); print_rec(s + 1); }
    else { putchar('\n'); }
}
int main(void) { print_rec("Hello, World!"); return 0; }
