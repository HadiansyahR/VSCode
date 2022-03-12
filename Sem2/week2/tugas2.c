#include <stdio.h>
#define SIZE 2
int main(){
    int i,j;
    int a[SIZE][SIZE] = {{6,7},{7,8}};
    int b[SIZE][SIZE] = {{1,3},{4,-1}};
    int hsl[SIZE][SIZE];
    
    printf("Tugas 2!\n");
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            hsl[i][j] = a[i][j] + b[i][j];
            printf("%d ", hsl[i][j]);
        }
       printf("\n");
    }
    return 0;
}