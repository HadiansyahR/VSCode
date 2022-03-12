/*
Program  : Tugas 2 - Matriks bulan
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 08-03-2022
Praktikum: [2]-[Array & Matriks]
*/

#include <stdio.h>

int main(){
    int i,j,pil;
    char bulan[12][1][10] = {{"Januari"},{"Februari"},{"Maret"},{"April"},
                             {"Mei"},{"Juni"},{"Juli"},{"Agustus"},
                             {"September"},{"Oktober"},{"November"},{"Desember"}};
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 1; j++)
        {
            printf("%d = %s", i+1, bulan[i][j]);
        }
        printf("\n");
    }

    printf("Tulis bulan ke berapa (angka 1-12) : ");
    scanf("%d", &pil);
    if (pil < 13 && pil > 0)
    {
        printf("%s", bulan[pil-1][0]);
    }else
    {
        printf("Tidak ada bulan %d", pil);
    }    
    return 0;
}