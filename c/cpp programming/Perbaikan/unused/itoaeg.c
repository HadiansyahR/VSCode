#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 120;
    char num[4];
    itoa(n, num, 10);

    printf("%d\n%s", n, num);
    return 0;
}