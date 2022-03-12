#include <stdio.h>

int main(){
    int i,j;
    int a[2][4]={{1,0,0,3},{6,7,2,5}};
    int b[2][4]={{-1,-1,-2,0},{3,4,5,-3}};
    int hasil[2][4];

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            hasil[i][j] = a[i][j] - b[i][j];
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
    return 0;
}