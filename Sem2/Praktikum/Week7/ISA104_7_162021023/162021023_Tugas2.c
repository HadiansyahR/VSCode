/*
Program  : Tugas 2
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 14-04-2022
Praktikum: [7]-[Searching]
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct mahasiswa
{
    char kodeMK[8];
    char indeks;
    int sks, jmlbobot, bobot;
}data;

int main(){
    int i, n;
    char key[8];

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);
    fgetc(stdin);

    data dt[n];
    system("cls");

    for (i = 0; i < n; i++)
    {
        printf("Data ke-%d\n", i+1);
        printf("Masukkan Kode Mata Kuliah: ");
        gets(dt[i].kodeMK);
        printf("Masukkan Jumlah SKS: ");
        scanf("%d", &dt[i].sks);
        fgetc(stdin);
        printf("Masukkan Indeks Nilai: ");
        scanf("%c", &dt[i].indeks);
        fgetc(stdin);
        printf("\n");
    }
    system("cls");

    printf("Cari Mata Kuliah: ");
    gets(key);

    for (i = 0; i < n; i++)
    {
        if (dt[i].indeks == 'A')
        {
            dt[i].bobot = 4;
        }
        else if (dt[i].indeks == 'B')
        {
            dt[i].bobot = 3;
        }
        else if (dt[i].indeks == 'C')
        {
            dt[i].bobot = 2;
        }
        else if (dt[i].indeks == 'D')
        {
            dt[i].bobot = 1;
        }
        else
        {
            dt[i].bobot = 0;
        }
        dt[i].jmlbobot = dt[i].sks * dt[i].bobot;
    }
    printf("Hasil pencarian\n");
    printf("=============================================\n");
    printf("|%-20s|%-3s|%-5s|%-12s|\n", "Kode Mata Kuliah", "SKS", "Nilai", "Jumlah Bobot");
    printf("=============================================\n");
    for (i = 0; i < n; i++)
    {
        if(strstr(dt[i].kodeMK, key) != NULL)
            printf("|%-20s|%-3d|%-5c|%-12d|\n", dt[i].kodeMK, dt[i].sks, dt[i].indeks, dt[i].jmlbobot);
    }
    printf("=============================================\n");
    return 0;
}