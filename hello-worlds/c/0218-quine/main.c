#include <stdio.h>
int main(void) {
    char *s = "#include <stdio.h>%cint main(void) {%c    char *s = %c%s%c;%c    printf(s, 10, 10, 34, s, 34, 10, 10, 34, 34, 10, 10);%c    printf(%cHello, World!\\n%c);%c    return 0;%c}";
    printf(s, 10, 10, 34, s, 34, 10, 10, 34, 34, 10, 10);
    printf("Hello, World!\n");
    return 0;
}
