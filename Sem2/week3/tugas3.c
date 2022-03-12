#include <stdio.h>
#define size 3

int main(){
    int i;
    int a[size] = {2,-1,3};
    int b[size] = {2,2,-1};
    int c[size];

    printf("Hasil AxB= \n");
    for (i = 0; i < size; i++)
    {
        c[i] = a[i] * b[i];
        printf("%d ", c[i]);
    }
    
    return 0;
}