#include <stdio.h>
const char* handler(const char *event) {
    (void)event;
    return "Hello, World!";
}
int main(void) {
    printf("%s\n", handler(NULL));
    return 0;
}
