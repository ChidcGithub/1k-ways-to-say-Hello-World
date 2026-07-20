#include <stdio.h>
/* Mock AVR registers */
#define UDR0 (*((volatile unsigned char*)0xC6))
#define UCSR0A (*((volatile unsigned char*)0xC0))
#define UDRE0 5
static int uart_ready(void) { return UCSR0A & (1 << UDRE0); }
static void uart_tx(char c) { while(!uart_ready()); UDR0 = c; }
void setup(void) {
    const char *s = "Hello, World!\n";
    while (*s) uart_tx(*s++);
}
int main(void) { setup(); printf("[AVR UART]: Hello, World!\n"); return 0; }
