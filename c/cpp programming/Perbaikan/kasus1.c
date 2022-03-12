/*
NRP: 162021023
Nama: Muhammad Hadiansyah Rabbani
Kode program ini benar-benar hasil pengerjaan saya tanpa bekerja
sama atau copy-paste dari sumber lain.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    char num[5];
    printf("Masukkan angka: ");
    scanf("%d", &n);
    
    itoa(n, num, 10);
    printf("%c - %c - %c - %c", num[0], num[1], num[2], num[3]);
    return 0;
}