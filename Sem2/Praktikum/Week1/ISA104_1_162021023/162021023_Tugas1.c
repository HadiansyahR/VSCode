/*
Program  : Perkalian elemen array
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 24-02-2022
Praktikum: [01]-[Perkalian elemen array]
*/

#include <stdio.h>
    
int main(){
    int i, hasil = 1;
    int arr[3];
    
    for (i = 0; i < 3; i++)
    {
        printf("Masukkan angka: ");
        scanf("%d", &arr[i]);

        hasil = hasil*arr[i];
    }
    printf("Hasil perkalian: %d", hasil);
    return 0;
}