#include <stdio.h>

int main()
{
    //baris while
    int x = 2;
    while (x<12)
    {
        printf("%i, ", x);
        x+=2;
    }
    if (x=12)
        {
            printf("%i", x);
        }
    //end
    
    printf("\n");
    
    //baris for
    for(x = 2; x<12; x+=2){
        printf("%i, ", x);
    }
    if (x=12)
        {
            printf("%i", x);
        }
}