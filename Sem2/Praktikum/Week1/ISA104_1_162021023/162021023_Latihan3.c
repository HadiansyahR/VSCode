/*
Program  : Segitiga siku-siku bintang
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 24-02-2022
Praktikum: [01]-[Penggunaan nested for loop]
*/

#include <stdio.h>
int main(){
    int i,j,n;
    printf("Masukkan angka apapun: ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}