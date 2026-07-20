#include <stdio.h>
int main(void) {
    const char *art[] = {
        "#   #  #####  #      #      #####         #   #  #####  ####    #      #### ",
        "#####  #      #      #      #   #         # # #  #   #  #  #    #      #   #",
        "#   #  #####  #####  #####  #####          # #  #####  # #    #####  #### "
    };
    for (int i = 0; i < 3; i++) printf("%s\n", art[i]);
    return 0;
}
