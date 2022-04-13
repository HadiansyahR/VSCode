#include <stdio.h>
    
int main(){
    int i,j,n,tmp,pos;
    n = 6;
    int array[n] = {12,45,32,6,34,3};

    for (i = 0; i < n-1; i++)
    {
        pos = i;
        for (j = i+1; j < n; j++)
        {
            if (array[pos] > array[j])
            {
                pos = j;
            }
            
        }
    }
    
    for (i = 0; i < 3; i++)
    {
        printf("%d\n", array[i]);
    }
    
    return 0;
}