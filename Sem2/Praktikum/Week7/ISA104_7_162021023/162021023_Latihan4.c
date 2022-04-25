/*
Program  : Latihan 4
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 14-04-2022
Praktikum: [7]-[Searching]
*/

#include <stdio.h>
long linear_search(long[], long, long);


int main(){
    long array[100], search, c, n, position;

    printf("Enter Number Of Elements In Array\n");
    scanf("%ld", &n);

    printf("Enter %d Numbers\n", n);

    for (c = 0; c < n; c++)
        scanf("%ld", &array[c]);

    printf("Enter a number to search\n");
    scanf("%ld",&search);

    position = linear_search(array, n, search);

    if(position == -1)
        printf("%d Isn't present in the array.\n", search);
    else
        printf("%d Is present At Location %d.\n", search, position+1);
    return 0;
}

long linear_search(long *pointer, long n, long find){
    long c;
    
    for (c = 0; c < n; c++)
    {
        if (*(pointer+c) == find)
            return c;
    }
        return -1;
}