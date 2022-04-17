/*
Program  : Latihan 2
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 14-04-2022
Praktikum: [7]-[Searching]
*/

#include <stdio.h>
    
int main(){
    int array[100], search, c, n, count = 0;

    printf("Enter Number Of Elements In Array\n");
    scanf("%d", &n);

    printf("Enter %d Numbers\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("Enter a number to search\n");
    scanf("%d",&search);

    for (c = 0; c < n; c++)
    {
        if (array[c] == search)
        {
            printf("%d is present at location %d\n", search, c+1);
            count++;
        }
    }
    if(count==0)
        printf("%d Isn't present in the array.\n", search);
    else
        printf("%d Is present %d Times In The Array.\n", search, count);
    return 0;
}