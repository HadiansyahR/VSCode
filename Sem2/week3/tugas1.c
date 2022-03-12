#include <stdio.h>

int main(){
    int i,j;
    int a[2][3]={{-1,3,5},{2,7,-4}};
    int b[2][3]={{6,-9,1},{2,3,4}};
    int hasil[2][3];

    printf("Hasil A+B= \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            hasil[i][j] = a[i][j] + b[i][j];
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
    return 0;
}