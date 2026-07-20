#include <stdio.h>
#include <stdarg.h>
void print_chars(int n, ...) {
    va_list args; va_start(args, n);
    for (int i = 0; i < n; i++) putchar(va_arg(args, int));
    putchar('\n'); va_end(args);
}
int main(void) {
    print_chars(13, 'H','e','l','l','o',',',' ','W','o','r','l','d','!');
    return 0;
}
