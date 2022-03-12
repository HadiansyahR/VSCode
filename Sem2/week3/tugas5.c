#include <stdio.h>

int main(){
    int i,j;
    int a[2][2]={{3,1},{2,-2}};
    int b[2][2]={{-2,4},{3,-1}};
    int hasil[2][2];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            hasil[i][j] = a[i][j] + b[i][j];
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
    return 0;
}