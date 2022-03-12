/*
Program  : Latihan 1
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 08-03-2022
Praktikum: [2]-[Array & Matriks]
*/
#include <stdio.h>
const int CITY = 2;
const int WEEK = 7;
int main(){
    int temperature[CITY][WEEK];
    for (int i = 0; i < CITY; i++)
    {
        for (int j = 0; j < WEEK; j++)
        {
            printf("City %d, Day %d: ", i+1, j+1);
            scanf("%d", &temperature[i][j]);
        }
    }
    printf("\nDisplaying values: \n\n");
    for (int i = 0; i < CITY; i++)
    {
        for (int j = 0; j < WEEK; j++)
        {
            printf("City %d, Day %d = %d\n", i+1, j+1, temperature[i][j]);
        }
    }

    return 0;
}