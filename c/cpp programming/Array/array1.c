#include <stdio.h>

int main(){
    int i, n, total = 0;

    printf("Masukkan jumlah elemen array: ");
    scanf("%d", &n);
    
    int array[n];
    for (i = 0; i < n; i++)
    {
        printf("Masukkan value indeks array: ");
        scanf("%d", &array[i]);
    }

    printf("\n%s\t%s\n", "Indeks", "Value");
    for (i = 0; i < n; i++)
    {
        printf("%d\t%d\n",i, array[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        total = total + array[i];
    }

    printf("\nTotal jumlah elemen array: %d",total);
    return 0;
}