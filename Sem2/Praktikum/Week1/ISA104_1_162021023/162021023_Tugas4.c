/*
Program  : Perbandingan 2 buah bilangan
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 24-02-2022
Praktikum: [01]-[Membandingkan 2 angka menggunakan perulangan]
*/

#include <stdio.h>
    
int main(){
    int x,y;

    printf("Masukkan angka pilihan: ");
    scanf("%d", &x);

    printf("Masukkan angka: ");
    scanf("%d", &y);

    while (y != x)
    {
        printf("%d bukan angka pilihan, coba lagi!!!\n", y);
        printf("Masukkan angka: ");
        scanf("%d", &y);
    }
    
    printf("%d adalah angka pilihan ^^", y);
    return 0;
}