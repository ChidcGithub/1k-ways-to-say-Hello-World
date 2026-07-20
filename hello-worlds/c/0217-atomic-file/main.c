#include <stdio.h>
#include <stdatomic.h>
static atomic_flag flag = ATOMIC_FLAG_INIT;
void write_greeting(FILE *f) {
    while (atomic_flag_test_and_set(&flag)) {}
    fprintf(f, "Hello, World!\n");
    atomic_flag_clear(&flag);
}
int main(void) {
    FILE *f = fopen("hello.txt", "w");
    write_greeting(f);
    fclose(f);
    printf("Written to hello.txt\n");
    return 0;
}
