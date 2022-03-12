#include <stdio.h>

int main(){
    int i,j;
    int a[2][3] = {{4,3,1},{2,1,0}};
    int b[2][3] = {{-1,2,-3},{1,1,0}};
    int tmpa[2][3];
    int tmpb[2][3];
    int hasil[2][3];

    printf("Hasil 2A + 2B= \n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            tmpa[i][j] = 2 * a[i][j];
            tmpb[i][j] = 2 * b[i][j];

            hasil[i][j] = tmpa[i][j]+tmpb[i][j];
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}