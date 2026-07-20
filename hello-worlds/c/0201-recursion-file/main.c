#include <stdio.h>
void write_rec(FILE *f, const char *s) {
    if (*s) { fputc(*s, f); write_rec(f, s + 1); }
    else { fputc('\n', f); }
}
int main(void) {
    FILE *f = fopen("hello.txt", "w");
    write_rec(f, "Hello, World!");
    fclose(f);
    printf("Written to hello.txt\n");
    return 0;
}
