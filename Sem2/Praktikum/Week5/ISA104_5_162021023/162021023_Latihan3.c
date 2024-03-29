/*
Program  : Selection Sort
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 24-03-2022
Praktikum: [5]-[Sorting]
*/

#include <stdio.h>
    
int main(){
    int array[100], n, i, j, position, swap;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    for (i = 0; i < n-1; i++)
    {
        position = i;
        for (j = i+1; j < n; j++)
        {
            if (array[position] > array[j])
            {
                position = j;
            }
        }
        if (position != i){
            swap = array[i];
            array[i] = array[position];
            array[position] = swap;
        }
    }
    printf("Sorted list in ascending order\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}