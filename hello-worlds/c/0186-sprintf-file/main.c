#include <stdio.h>
int main(void) {
    char buf[64];
    sprintf(buf, "Hello, World!\n");
    FILE *f = fopen("hello.txt", "w");
    fputs(buf, f);
    fclose(f);
    printf("Written to hello.txt\n");
    return 0;
}
