#include <stdio.h>
void with_greeting(void (*cb)(const char*)){cb("Hello, World!");}
void print_msg(const char*s){printf("%s\n",s);}
int main(void){with_greeting(print_msg);return 0;}
