#include <stdio.h>
int main(void) {
    FILE *f = fopen("hello.txt", "w");
    fprintf(f, "Hello, World!\n");
    fclose(f);
    printf("Written to hello.txt\n");
    return 0;
}
