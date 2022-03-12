/*
Program  : Latihan 1
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 12-03-2022
Praktikum: [3]-[Struct dan ADT]
*/

#include <stdio.h>
#include <conio.h>

typedef struct bangun
{
    int panjang;
    int lebar;
}bangun_persegi;

int main(void){
    bangun_persegi bangun1;
    printf("==========Menentukan jenis bangun persegi==========\n");
    printf("Masukkan panjang bangun persegi: ");
    scanf("%d", &bangun1.panjang);
    printf("Masukkan lebar bangun persegi: ");
    scanf("%d", &bangun1.lebar);

    if (bangun1.panjang == bangun1.lebar)
    {
        printf("Jenis bangun persegi adalah: Persegi");
    }else
    {
        printf("Jenis bangun persegi adalah: Persegi Panjang");
    }
    
    return 0;
}