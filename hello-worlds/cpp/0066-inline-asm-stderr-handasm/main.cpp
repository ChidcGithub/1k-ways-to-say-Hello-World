// 0066-inline-asm-stderr-handasm
// Hand-assembled flavor: an inline-asm marker block plus a direct write to
// stderr (fd 2). On Linux/x86 this would be `int 0x80` with eax=4 (sys_write),
// ebx=2 (stderr), ecx=buf, edx=14. Windows has no int 0x80 syscall ABI, so we
// keep a small inline-asm NOP as a symbolic hand-assembled marker and emit the
// bytes to stderr via fputs, which the C runtime routes to fd 2.

#include <cstdio>

int main(void) {
    const char msg[] = "Hello, World!\n";

    // Symbolic hand-assembled marker: a NOP instruction embedded via GCC
    // inline assembly. On Linux this slot would hold the int 0x80 sys_write
    // sequence targeting fd 2 (stderr).
    __asm__ volatile("nop");

    // Emit to stderr (fd 2). fputs performs no formatting, mirroring a raw
    // write(2, buf, len) call as closely as portable C++ allows on Windows.
    fputs(msg, stderr);
    return 0;
}
