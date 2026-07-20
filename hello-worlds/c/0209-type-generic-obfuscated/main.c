#include <stdio.h>
#define PRINT_GREET(x) _Generic((x), \
    int: printf("Hello, World!\n"), \
    char*: printf("%s\n", (x)), \
    default: printf("Hello, World!\n") \
)
int main(void) {
    PRINT_GREET(42);
    return 0;
}
