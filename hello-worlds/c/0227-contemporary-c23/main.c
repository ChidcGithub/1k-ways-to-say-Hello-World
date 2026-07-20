#include <stdio.h>
constexpr char greeting[] = "Hello, World!\n";
int main(void) {
    fwrite(greeting, 1, sizeof(greeting) - 1, stdout);
    return 0;
}
