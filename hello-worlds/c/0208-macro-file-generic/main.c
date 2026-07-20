#include <stdio.h>
#define GREET_TO(f) fprintf(f, "Hello, World!\n")
int main(void) {
    FILE *f = fopen("hello.txt", "w");
    GREET_TO(f);
    fclose(f);
    printf("Written to hello.txt\n");
    return 0;
}
