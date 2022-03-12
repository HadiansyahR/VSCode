#include <stdio.h>
    
int main(){
    int i,j;
    int a[4][3] = {{4,5,7},{2,3,8},{6,-9,10},{7,7,23}};
    
    printf("Sebelum Transpose:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Setelah Transpose:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}