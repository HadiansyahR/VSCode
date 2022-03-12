/*
Program  : Menu paket
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 24-02-2022
Praktikum: [01]-[Membuat menu menggunakan switch case]
*/

#include <stdio.h>
    
int main(){
    int i,n;

    printf("1. Paket A\n");
    printf("2. Paket B\n");
    printf("3. Paket C\n");
    printf("Silahkan pilih paket yang ingin anda pesan: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Anda Memesan Paket A");
        break;
    case 2:
        printf("Anda Memesan Paket B");
        break;
    case 3:
        printf("Anda Memesan Paket C");
        break;
    default:
        break;
    }
    return 0;
}