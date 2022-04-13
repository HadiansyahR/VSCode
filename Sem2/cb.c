#include <stdio.h>
int main(int argc, char **argv) {
    for(int i = 0; i < 2300; ++i)
        printf("%c", argv[0][i]);
    return 0;
}
