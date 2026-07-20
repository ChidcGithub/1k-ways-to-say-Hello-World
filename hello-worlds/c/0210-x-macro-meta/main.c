#include <stdio.h>
int main(void) {
    #define X(name, ch) putchar(ch);
    #include "greeting.def"
    #undef X
    putchar('\n');
    return 0;
}
