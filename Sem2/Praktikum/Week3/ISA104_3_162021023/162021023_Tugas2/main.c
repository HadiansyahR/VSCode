/*
Program  : Tugas 2
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 12-03-2022
Praktikum: [3]-[Struct dan ADT]
*/
#include <stdio.h>
#include "body.c"

int main(void){
    mhsis mhs1;
    int jur;
    
    printf("----------Sikad Itenice IS----------\n\n");

    printf("Nama: ");
    gets(mhs1.nama);
    printf("NRP: ");
    scanf("%d", &mhs1.nrp);
    printf("Nilai: ");
    scanf("%d", &mhs1.nilai);

    if (getjurusan(mhs1) == 16 && mhs1.nilai > 70)
    {
        tampil(mhs1);
    }
    return 0;
}