#include <stdio.h>
int main(void) {
    FILE *f = fopen("hello.ppm", "w");
    fprintf(f, "P6\n100 30\n255\n");
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 100; j++) {
            unsigned char r = 255, g = 255, b = 255;
            if (i == 0 || i == 29 || j == 0 || j == 99) { r = g = b = 0; }
            fwrite(&r, 1, 1, f); fwrite(&g, 1, 1, f); fwrite(&b, 1, 1, f);
        }
    }
    fclose(f);
    printf("Written hello.ppm\n");
    return 0;
}
