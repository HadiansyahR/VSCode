/*
Program  : Menentukan indeks nilai
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 24-02-2022
Praktikum: [01]-[Menentukan indeks nilai berdasarkan angka yang diinput user]
*/

#include <stdio.h>
    
int main(){
    int nilai;
    char indeks;
    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if (nilai>=80)
    {
        indeks = 'A';
    }else if (nilai<80 && nilai >=60)
    {
        indeks = 'B';
    }else if (nilai<60 && nilai >=40)
    {
        indeks = 'C';
    }else if (nilai<40 && nilai >=20)
    {
        indeks = 'D';
    }else
    {
        indeks = 'E';
    }
    
    printf("Indeks nilai: %c", indeks);    
    
    return 0;
}