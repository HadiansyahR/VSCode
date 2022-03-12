#include <stdio.h>
#define row 4
#define col 3
int main(){
    int i,j;
    int a[4][3] = {{4,5,7},{2,3,8},{6,-9,10},{7,7,23}};
    int b[4][3] = {{12,16,73},{43,21,43},{23,44,21},{34,12,11}};
    int hasil[4][3];                      

    printf("Sebelum Transpose:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            hasil[i][j] = a[i][j]+b[i][j];
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Setelah Transpose:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", hasil[j][i]);
        }
        printf("\n");
    }
    return 0;
}