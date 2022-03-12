#include <stdio.h>
#include <string.h>
typedef struct
{
    char ibukota[30];
    char provinsi[30];
}data;

int n,i,j;

int main(){
    printf("Masukkan banyak data:");
    scanf("%d", &n);
    data d1[n];
    char array[n][2][30];

    for (i = 0; i < n; i++)
    {
        printf("Masukkan nama provinsi:");
            scanf("%s", &d1[j].provinsi);
            strcpy(array[i][0], d1[j].provinsi);
        printf("Masukkan nama ibukota:");
            scanf("%s", &d1[j].ibukota);
            strcpy(array[i][1], d1[j].ibukota);
    }
    printf("\nProvinsi\tIbukota\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%12s", array[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}