/*
Program  : Break
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 24-02-2022
Praktikum: [01]-[Penggunaan break]
*/

#include <stdio.h>
 
int main(void){
    int nilai;
    int jumlah = 0;
    int i = 0;
    int n;

    printf("Banyaknya perulangan: ");
    scanf("%d", &n);
    while (i<n)
    {
        printf("Masukkan nilai ke-%d: ", i++);
        scanf("%d", &nilai);
        if (nilai == 0)
        {
            break;
        }
        jumlah = jumlah + nilai;
    }
    printf("Total is: %d\n", jumlah);
    return 0;
}