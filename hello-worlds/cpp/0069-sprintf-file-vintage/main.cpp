// 0069-sprintf-file-vintage
// Vintage C++: format the greeting into a buffer with sprintf, write the
// buffer to a file, read it back and print to stdout to verify, then remove
// the file so the workspace is left clean.

#include <cstdio>

int main(void) {
    char buf[32];
    std::sprintf(buf, "Hello, World!");

    // Write the buffer to "hello.txt" using vintage fopen/fputs.
    FILE* out = std::fopen("hello.txt", "w");
    if (out == nullptr) {
        return 1;
    }
    std::fputs(buf, out);
    std::fclose(out);

    // Read it back and print to stdout to verify the round-trip.
    FILE* in = std::fopen("hello.txt", "r");
    if (in == nullptr) {
        return 2;
    }
    char readback[64];
    if (std::fgets(readback, sizeof(readback), in) != nullptr) {
        std::printf("%s\n", readback);
    }
    std::fclose(in);

    // Clean up: remove the file.
    std::remove("hello.txt");
    return 0;
}
