/*
Program  : Latihan 3
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 12-03-2022
Praktikum: [3]-[Struct dan ADT]
*/
#include "hitung.h"
#include "body.c"

int main(void){
    angka angka1;
    int i;

    printf("Masukkan angka ke-1: ");
    scanf("%d", &angka1.a);
    printf("Masukkan angka ke-2: ");
    scanf("%d", &angka1.b);

    penjumlahan(angka1.a, angka1.b);
    printf("\nHasil pengurangan: %d", pengurangan(angka1.a, angka1.b));
    
}