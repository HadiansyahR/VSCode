#include <stdio.h>
#define size 2
int main(){
    int i,j,k;
    int a[size][size]={{1,2},{3,4}};
    int b[size][size]={{1,1},{1,1}};
    int hasil[size][size];

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            hasil[i][j] = 0;
            for (k = 0; k < size; k++)
            {
                hasil[i][j] += a[i][k]*b[k][j];
            }
        }
    }

    printf("Hasil versi Matematika=\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
    
    printf("Hasil versi Matkul Pemdas=\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("%d ", a[i][j]*b[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}