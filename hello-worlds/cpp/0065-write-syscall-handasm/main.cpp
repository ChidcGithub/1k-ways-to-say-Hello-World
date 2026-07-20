// 0065-write-syscall-handasm
// Calls the OS write() syscall directly via <io.h> _write on Windows.
// fd 1 = stdout; hand-assembled FFI style. No printf / cout.

#include <io.h>     // _write
#include <fcntl.h>  // file descriptor constants

int main(void) {
    // fd 1 is stdout; write exactly 14 bytes ("Hello, World!\n").
    _write(1, "Hello, World!\n", 14);
    return 0;
}
