#include <stdio.h>

int main(){
    int n, i;

    printf("Masukkan panjang deret: ");
    scanf("%d", &n);

    int fib[n];

    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i < n; i++)
    {
        fib[i] = fib[i-2]+fib[i-1];
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", fib[i]);
    }
    

    return 0;
}