#include <stdio.h>
#define SIZE 5
int main(){
    int x, y, i, n;

    printf(" ");
    for (y = 0; y < SIZE; y++)
    {
        printf("_");
    }
    
    for (i = 0; i < SIZE; i++)
    {
        printf("\n|");
        for (y = SIZE*2; y > SIZE; y--)
        {
            printf("%d", y);
        
        for (n = i; n < SIZE; n++)
        {
            printf("*");            
        }
    }
    printf("|");
    }
    
}