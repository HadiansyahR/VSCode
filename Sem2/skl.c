#include <stdio.h>

int main(){
    int i,j,k;
  
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 11; j++)
        {
            if (j<4 || j>6)
            {
                printf(" ");
            }
            
            if (j==4)
            {
                for (k = j; k < 7; k++)
                {
                    printf("=");
                }
            }
        }
        printf("\n");
    }
        
    return 0;
}