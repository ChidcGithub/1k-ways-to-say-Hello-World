#include <stdio.h>
int main(int argc, char *argv[]) {
    const char *msg = (argc > 1) ? argv[1] : "Hello, World!";
    fprintf(stderr, "%s\n", msg);
    return 0;
}
