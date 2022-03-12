/*
NRP: 162021023
Nama: Muhammad Hadiansyah Rabbani
Kode program ini benar-benar hasil pengerjaan saya tanpa bekerja
sama atau copy-paste dari sumber lain.
*/
#include <stdio.h>

int main(){
    int i,n,mid;

    printf("Input panjang array: ");
    scanf("%d", &n);
    int array[n];
    mid = n/2;

    for (i = 0; i < n; i++)
    {
        printf("Input elemen ke-%d: ", i);
        scanf("%d", &array[i]);
    }
    
    if (n%2!=0)
    {
        printf("Baris pertama: ");
        for (i = n-1; i > mid; i--)
        {
            printf("%d ", array[i]);
        }

        printf("\nBaris kedua  : ");
        for (i = 0; i <= mid; i++)
        {
            printf("%d ", array[i]);
        }
    }
    else
    {
        printf("Baris pertama: ");
        for (i = n-1; i >= mid; i--)
        {
            printf("%d ", array[i]);
        }

        printf("\nBaris kedua  : ");
        for (i = 0; i < mid; i++)
        {
            printf("%d ", array[i]);
        }
    }  
    
    return 0;
}