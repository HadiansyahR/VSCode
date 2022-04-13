#include <stdio.h>
#include <stdlib.h>

int faktorial(int a){
    if(a<=1){
        return a;
    }
    else{
    return a * faktorial(a-1);
    }
}
int main()
{
    int b;
    b = 10;
    printf("%d!: %d", b, faktorial(b));

    return 0;
}