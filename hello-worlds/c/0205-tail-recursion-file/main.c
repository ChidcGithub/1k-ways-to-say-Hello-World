#include <stdio.h>
__attribute__((optimize("tail-call-optimize")))
void write_tail(FILE *f, const char *s, int i, int len) {
    if (i >= len) { fputc('\n', f); return; }
    fputc(s[i], f);
    write_tail(f, s, i + 1, len);
}
int main(void) {
    const char *msg = "Hello, World!";
    FILE *f = fopen("hello.txt", "w");
    write_tail(f, msg, 0, 13);
    fclose(f);
    printf("Written to hello.txt\n");
    return 0;
}
