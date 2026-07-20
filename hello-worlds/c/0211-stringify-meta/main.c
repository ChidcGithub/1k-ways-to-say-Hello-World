#include <stdio.h>
#define STR(...) #__VA_ARGS__
#define XSTR(...) STR(__VA_ARGS__)
int main(void) {
    /* This demonstrates # stringification but we still need the actual greeting */
    printf("Hello, World!\n");
    printf("Macro demo: %s\n", XSTR(Hello, World!));
    return 0;
}
