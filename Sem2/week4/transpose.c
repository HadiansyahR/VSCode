#include <stdio.h>
    
int main(){
    int i,j;
    int arr[4][3] = {{4,5,7},{2,3,8},{6,-9,10},{7,7,23}};
    int trans[3][4];

    printf("Sebelum transpose:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            trans[j][i] = arr[i][j];
        }
    }
    printf("\n");

    printf("Setelah transpose:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}