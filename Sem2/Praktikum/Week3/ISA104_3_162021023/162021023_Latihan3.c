/*
Program  : Latihan 3
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 12-03-2022
Praktikum: [3]-[Struct dan ADT]
*/

#include <stdio.h>
#include <conio.h>

typedef struct
{
    int ukuran;
}kubus[2];

int main(void){
    kubus kubus1;
    int i, volume = 1;
    printf("==========Menghitung volume balok==========\n");

    for (i = 0; i < 3; i++)
    {
        printf("Masukkan panjang sisi ke-%d: ", i+1);
        scanf("%d", &kubus1[i].ukuran);
    }
    
    volume = kubus1[0].ukuran * kubus1[1].ukuran * kubus1[2].ukuran;

    printf("Volume balok adalah: %d", volume);

    return 0;
}