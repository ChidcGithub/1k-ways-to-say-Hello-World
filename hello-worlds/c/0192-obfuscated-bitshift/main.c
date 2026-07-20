#include <stdio.h>
int main(void) {
    int h=0x48, e=h^0x2d, l=e^0x09, o=l|3, c=0x2c, s=1<<5, w=0x57, r=o^0x1d, d=l^0x08, b=(1<<5)|1;
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c\n",h,e,l,l,o,c,s,w,o,r,l,d,b);
    return 0;
}
