#include <stdio.h>
int i,j;
int main(){
    int n, tmp;
    printf("Masukkan panjang array: ");
    scanf("%d", &n);
    fgetc(stdin);
    int array[n];
    
    for (i = 0; i < n; i++)
    {
        printf("Masukkan nilai ke %d : ", i);
        scanf("%d", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (array[j] > array[j+1])
            {
                tmp = array[j];
                array[j] = array[j+1];
                array[j+1] = tmp;
            }
        }
    }
    
    printf("\nHasil pengurutan: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}