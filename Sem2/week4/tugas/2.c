#include <stdio.h>
    
int main(){
    int i,j;
    int a[3][3] = {{6,5,7},{12,6,11},{4,6,9}};
    int b[3][3] = {{3,8,9},{5,6,11},{3,4,2}};
    int hasil[3][3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            hasil[i][j] = a[i][j]-b[i][j];
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}