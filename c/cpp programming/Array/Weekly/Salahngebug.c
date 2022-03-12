#include <stdio.h>

int main(){
    int n, i;

    printf("Masukkan indeks: ");
    scanf("%d", &n);

    int array[n];
    for (i = 0; i < n; i++)
    {
        printf("Masukkan elemen array: ");
        scanf("%d", &array[i]);
    }

if (n%2==0)
{
    printf("Baris pertama: ");
    for (i = (n/2); i < n; n--)
    {
        printf("%d", array[n-1]);
    }
printf("\n");
    printf("Baris kedua: ");
    for (i = 0; i <= (n/2)+1; i++)
    {
        printf("%d", array[i]);
    }
}
else
{
    printf("Baris pertama: ");
    for (i = (n/2)+1; i < n; n--)
    {
        printf("%d", array[n-1]);
    }
printf("\n");
    printf("Baris kedua: ");
    for (i = 0; i <=(n/2)+1; i++)
    {
        printf("%d", array[i]);
    }
}    
   return 0; 
}