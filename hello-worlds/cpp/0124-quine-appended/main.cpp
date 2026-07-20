#include <cstdio>
const char*s="#include <cstdio>%cconst char*s=%c%s%c;%cint main(){printf(s,10,34,s,34,10,34,34);printf(%c\\nHello, World!\\n%c);return 0;}";
int main(){printf(s,10,34,s,34,10,34,34);printf("\nHello, World!\n");return 0;}
