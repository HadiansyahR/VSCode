#include <stdio.h>

int main(){
    int i,j,k;
    int a[4][3] = {{4,5,7},{2,3,8},{6,-9,10},{7,7,23}};
    int b[4][3] = {{12,16,73},{43,21,43},{23,44,21},{34,12,11}};
    int c[4][3];
    int trn[3][4];

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                trn[j][k] = c[i][j];
            }
        }
    }
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", trn[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}