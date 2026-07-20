#define _POSIX_C_SOURCE 200809L
#include <unistd.h>
int main(void) {
    const char *msg = "Hello, World!\n";
    int len = 14;
    __asm__ volatile (
        "movl $4, %%eax\n"
        "movl $2, %%ebx\n"
        "movl %0, %%ecx\n"
        "movl %1, %%edx\n"
        "int $0x80\n"
        :: "r"(msg), "r"(len) : "eax", "ebx", "ecx", "edx"
    );
    return 0;
}
