#include <stdio.h>
#include <string.h>
typedef struct
{
    char judul[50];
    char penulis[20];
    int tahun;
} buku;

int main(){
    buku buku[6];
    int i;

    strcpy(buku[0].judul,"Algoritma dan Pemrograman");
    strcpy(buku[0].penulis,"Andi");
    buku[0].tahun= 2018;

    strcpy(buku[1].judul,"Pemrograman Java");
    strcpy(buku[1].penulis,"Budiyanto");
    buku[1].tahun= 2016;
    
    strcpy(buku[2].judul,"Pemrograman Web dengan Laravel");
    strcpy(buku[2].penulis,"Susanto");
    buku[2].tahun= 2019;

    strcpy(buku[3].judul,"Android Studio");
    strcpy(buku[3].penulis,"Andi");
    buku[3].tahun= 2020;

    strcpy(buku[4].judul,"Data Mining dengan Rapidminer");
    strcpy(buku[4].penulis,"Budiyanto");
    buku[4].tahun= 2020;

    strcpy(buku[5].judul,"Membuat Aplikasi Android");
    strcpy(buku[5].penulis,"Andi");
    buku[5].tahun= 2017;

    printf("%20s%18s%7s\n", "Judul", "Penulis", "Tahun");
    for (i = 0; i < 6; i++)
    {
        if (strcmp(buku[i].penulis, "Andi")==0 && buku[i].tahun >= 2018)
        {
            printf("%31s\t%s\t%2d\n", buku[i].judul, buku[i].penulis, buku[i].tahun);
        }
    }
    
    return 0;
}