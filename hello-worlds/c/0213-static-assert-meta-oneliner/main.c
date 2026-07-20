#include <stdio.h>
_Static_assert(sizeof("Hello, World!") == 14, "Greeting length mismatch");
int main(void){printf("Hello, World!\n");return 0;}
