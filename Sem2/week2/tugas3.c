#include <stdio.h>

int main(){
    int x,y,i,j;
    printf("Tugas 3!\n");

    printf("Masukkan Baris: ");
    scanf("%d", &x);
    fgetc(stdin);
    printf("Masukkan Kolom: ");
    scanf("%d", &y);
    fgetc(stdin);

    int arr[x][y];

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("Masukkan Indeks ke[%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
            fgetc(stdin);
        }
    }

    printf("\nHasil Inputan!\n");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}