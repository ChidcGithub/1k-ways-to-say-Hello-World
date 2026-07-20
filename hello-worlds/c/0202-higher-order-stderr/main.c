#include <stdio.h>
#include <string.h>
typedef char (*char_map_fn)(char);
void map_str(char *s, char_map_fn f) { while (*s) { *s = f(*s); s++; } }
char identity(char c) { return c; }
int main(void) {
    char buf[] = "Hello, World!";
    map_str(buf, identity);
    fprintf(stderr, "%s\n", buf);
    return 0;
}
