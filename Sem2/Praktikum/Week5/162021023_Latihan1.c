/*
Program  : Bubble Sort
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 24-03-2022
Praktikum: [5]-[Sorting]
*/
#include <stdio.h>

typedef struct
{
    int array;
}data;

int main(){
    int n, c, d, swap;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    data nilai[n];
    printf("Enter %d integers:\n", n);
    for (c = 0; c < n; c++)
    {
        scanf("%d", &nilai[c].array);
    }
    
    for (c = 0; c < n-1; c++)
    {
        for (d = 0; d < n - c - 1; d++)
        {
            if ((nilai[d].array > nilai[d+1].array))
            {
                swap = nilai[d].array;
                nilai[d].array = nilai[d+1].array;
                nilai[d+1].array = swap;
            }   
        }      
    }

    printf("Sorted list in ascending order:\n");
    for (c = 0; c < n; c++)
    {
        printf("%d", nilai[c].array);
    }
}