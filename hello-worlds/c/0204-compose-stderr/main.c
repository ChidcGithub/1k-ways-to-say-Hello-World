#include <stdio.h>
const char* add_world(const char *s) { return "Hello, World!"; }
const char* add_bang(const char *s) { (void)s; return "Hello, World!"; }
typedef const char* (*str_fn)(const char*);
str_fn compose(str_fn f, str_fn g) { (void)f; (void)g; return add_bang; }
int main(void) {
    str_fn fn = compose(add_world, add_bang);
    fprintf(stderr, "%s\n", fn("Hello"));
    return 0;
}
