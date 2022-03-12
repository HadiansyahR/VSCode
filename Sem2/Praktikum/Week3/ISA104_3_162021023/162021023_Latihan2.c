/*
Program  : Latihan 2
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 12-03-2022
Praktikum: [3]-[Struct dan ADT]
*/

#include <stdio.h>
#include <conio.h>

typedef struct
{
    char nama[50];
    char jenis[50];
    int harga;
}produk;

int main(void){
    produk produk1;

    printf("==========Input data toko serba ada==========\n");
    printf("Silahkan masukan data produk..........\n");
    printf("Nama produk: ");
    gets(produk1.nama);
    printf("Jenis produk: ");
    gets(produk1.jenis);
    printf("Harga produk: ");
    scanf("%d", &produk1.harga);

    printf("\n==========Data yang diinputkan==========\n");
    printf("Anda baru saja menginputkan sebuah produk bernama %s yang berjenis %s dengan harga Rp.%i", produk1.nama, produk1.jenis, produk1.harga);
    return 0;
}