#include <stdio.h>
    
int main(){
    int i,j;
    int a[3][3] = {{22,14,17},{15,36,23},{23,29,11}};
    int b[3][3] = {{9,7,3},{6,3,16},{12,23,7}};
    int c[3][3] = {{3,4,8},{11,5,15},{3,7,6}};
    int hasil[3][3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            hasil[i][j] = (a[i][j]+b[i][j])-c[i][j];
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}