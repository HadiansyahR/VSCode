/*
Nama/NRP: Muhammad Hadiansyah Rabbani/162021023
Tanggal Ujian: 31/03/2022
Saya berjanji tidak melakukan kecurangan pada ujian ini.
*/
#include <stdio.h>
#include <string.h>

int i;

typedef struct mahasiswa
{
    char kodeMK[8], namaMK[50];
    char indeks;
    int sks, jmlbobot, bobot;
}data;
    
int main(){
    float ip;
    int totalsks = 0, totaljmlbobot = 0, n, sksambil;

    printf("Masukkan jumlah data: ");
    scanf("%d", &n);
    fgetc(stdin);
    data dt[n];

    for (i = 0; i < n; i++)
    {
        printf("\nData ke-%d\n", i+1);
        printf("Masukkan Kode Mata Kuliah: ");
        gets(dt[i].kodeMK);
        printf("Masukkan Nama Mata Kuliah: ");
        gets(dt[i].namaMK);
        printf("Masukkan Jumlah SKS: ");
        scanf("%d", &dt[i].sks);
        fgetc(stdin);
        printf("Masukkan Indeks Nilai: ");
        scanf("%c", &dt[i].indeks);
        fgetc(stdin);
    }

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
        totaljmlbobot = totaljmlbobot + dt[i].jmlbobot;
        totalsks = totalsks + dt[i].sks;
    }

    ip = (float)totaljmlbobot/(float)totalsks;

    printf("\n|===================================================================================|\n");
    printf("|%-20s|%-25s|%-3s|%-12s|%-6s|%-12s|\n", "Kode Mata Kuliah", "Nama Mata Kuliah", "SKS", "Indeks Nilai", "Bobot", "Jumlah Bobot");
    printf("|===================================================================================|\n");
    for (i = 0; i < n; i++)
    {
        printf("|%-20s|%-25s|%-3d|%-12c|%-6d|%-12d|\n", dt[i].kodeMK, dt[i].namaMK, dt[i].sks, dt[i].indeks, dt[i].bobot, dt[i].jmlbobot);
    }
    printf("|===================================================================================|\n");

    printf("\nTotal Jumlah Bobot: %d\nTotal SKS: %d\nIP: %.1f\n", totaljmlbobot, totalsks, ip);
    
    if (ip >= 3.00){
        sksambil = 24;
    }
    else if (ip < 3.00 && ip > 2.00){
        sksambil = 20;
    }
    else{
        sksambil = 18;
    }
    printf("\nJumlah SKS yang bisa diambil %d", sksambil);

    return 0;
}