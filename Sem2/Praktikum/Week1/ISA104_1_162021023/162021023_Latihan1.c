/*
Program  : Anak ayam
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 24-02-2022
Praktikum: [01]-[Penggunaan while do]
*/

#include <stdio.h>
int main(){
    int banyakayam;

    printf("Banyak anak ayam: ");
    scanf("%d", &banyakayam);

    while (banyakayam>1)
    {
        printf("\nAnak ayam turunlah %d\n", banyakayam);
        banyakayam--;
        printf("Mati satu tinggallah %d\n", banyakayam);
    }
    printf("\nAnak ayam turunlah %d\n", banyakayam);
    printf("Mati satu tinggal induknya\n");
    
    return 0;
}