#include <stdio.h>
#define SIZE 2

int main(){
    int i,j;
    int a[SIZE][SIZE]={{3,1},{4,2}};
    int b[SIZE][SIZE]={{0,2},{1,3}};

    printf("Hasil A-B=\n");
    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++){
            printf("%d ", a[i][j] - b[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}