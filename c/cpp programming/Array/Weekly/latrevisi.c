#include <stdio.h>

int main(){
    int n, i;

    printf("Masukkan jumlah indeks: ");
    scanf("%d", &n);

    int array[n];

    for (i = 0; i < n; i++)
    {
        printf("Masukkan elemen array: ");
        scanf("%d", &array[i]);
    }

if (n%2!=0)
{
    for (i = n-1; i > n/2; i--)
    {
        printf("%d", array[i]);
    }
    printf("\n");
    for (i = 0; i <= n/2; i++)
    {
        printf("%d", array[i]);
    }
}else
{
    for (i = n-1; i >= n/2; i--)
    {
        printf("%d", array[i]);
    }
    printf("\n");
    for (i = 0; i < n/2; i++)
    {
        printf("%d", array[i]);
    }
}    
return 0;   
}