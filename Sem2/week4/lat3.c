#include <stdio.h>
    
int main(){
    int i,j,k;

    int a[3][3] = {{4,5,7},{2,3,8},{3,8,3}};
    int b[3][3] = {{6,7,12},{7,8,9},{8,2,1}};
    int hasil[3][3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            hasil[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                hasil[i][j] += a[i][k]*b[k][j];
            }  
        }
    }
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}