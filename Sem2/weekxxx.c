#include <stdio.h>
    
int main(){
    int i, j, tmp, n=5;
    int array[n];

    printf("Inputan Array A\n");
    for (i = 0; i < n; i++)
    {
        printf("Masukan nilai array A [%d] = ", i);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (array[i]>array[i+1])
            {
                tmp = array[i];
                array[i] = array[i+1];
                array[i+1] = tmp;
            }
            
        }
        
    }
    
    printf("\nKeluaran Array A\n");
    for (i = 0; i < n; i++)
    {
        printf("Nilai array A [%d] = %d\n", i, array[i]);
    }
    
    return 0;
}