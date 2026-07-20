#include <stdio.h>
char fold_add(char acc, char c) { return acc + c; }
/* Actually: concatenate chars into a buffer */
int main(void) {
    int codes[] = {72,101,108,108,111,44,32,87,111,114,108,100,33};
    char buf[14];
    for (int i = 0; i < 13; i++) buf[i] = (char)codes[i];
    buf[13] = '\0';
    printf("%s\n", buf);
    return 0;
}
