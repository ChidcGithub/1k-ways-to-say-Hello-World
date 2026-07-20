#include <stdio.h>
/* Mock Arduino Serial (C11-compatible via function pointers) */
static void serial_begin(int b) { (void)b; }
static void serial_print(const char *s) { printf("[Serial]: %s", s); }
static void serial_println(const char *s) { printf("[Serial]: %s\n", s); }
static struct {
    void (*begin)(int);
    void (*print)(const char *);
    void (*println)(const char *);
} Serial = { serial_begin, serial_print, serial_println };
void setup(void) { Serial.begin(9600); Serial.println("Hello, World!"); }
void loop(void) {}
int main(void) { setup(); return 0; }
