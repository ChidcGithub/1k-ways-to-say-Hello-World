#include <stdio.h>
/* In real WASM, this would be an extern import: __attribute__((import_name("js_print"))) */
extern void js_print(const char *s);
/* Mock for local compilation */
void js_print(const char *s) { printf("%s\n", s); }
int main(void) { js_print("Hello, World!"); return 0; }
