/*
Program  : Tugas 1
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 21-04-2022
Praktikum: [8]-[Operasi File]
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 50
typedef struct databuku
{
    char kode_buku[10];
    char judul_buku[50];
    char penulis[50];
    char penerbit[20];
    int jmlbuku;
}db;

FILE *fbuku;
int i,j,n;
db db1[MAX];
char namafile[20];

void menu();
void buat();
void input();
void tampil();
void edit();
void hapus();

int main(){
    system("cls");
    menu();
    return 0;
}

void menu(){
    int pil, stat;
    pilih:
    printf("\nDATA BUKU PERPUSTAKAAN\n\n");
    printf("1. Buat File\n2. Input Data\n3. Tampilkan Data\n");
    printf("4. Edit Data\n5. Hapus Data\n0. Keluar\n\n");
    printf("Pilih menu : ");
    scanf("%d", &pil);
    fgetc(stdin);

    switch (pil)
    {
    case 1:
        buat();
        if ((fbuku = fopen(namafile, "r"))!=NULL)
        {
            printf("\nFile berhasil dibuat!\n");
        }
        else
        {
            printf("\nFile gagal dibuat!\n");
            buat();
        }
        goto pilih;
        break;
    case 2:
        input();
        goto pilih;
        break;
    case 3:
        tampil();
        goto pilih;
        break;
    case 4:
        edit();
        goto pilih;
        break;
    case 5:
        hapus();
        goto pilih;
        break;
    case 0:
        printf("Sesi telah berakhir.");
        break;
    default:
        system("cls");
        printf("Opsi tidak ada, silahkan memilih ulang.\n\n");
        goto pilih;
        break;
    }
}

void buat(){
    printf("Buat file : ");
    gets(namafile);
    fbuku = fopen(namafile, "w");

    fclose(fbuku);
}

void input(){
    printf("\nJumlah data: ");
    scanf("%d", &n);
    fgetc(stdin);

    printf("========================================\n");
    for (i = 0; i < n; i++)
    {
        printf("Input Data (%d/%d):\n", i+1, n);
        printf("Masukkan kode buku = ");
        gets(db1[i].kode_buku);
        printf("Masukkan judul buku = ");
        gets(db1[i].judul_buku);
        printf("Masukkan penulis buku = ");
        gets(db1[i].penulis);
        printf("Masukkan penerbit buku = ");
        gets(db1[i].penerbit);
        printf("Masukkan jumlah buku = ");
        scanf("%d", &db1[i].jmlbuku);
        fgetc(stdin);
        printf("\n");
    }
    printf("========================================\n");
    
    fbuku = fopen(namafile, "w");
    for (i = 0; i < n; ++i)
    {
        fprintf(fbuku, "Data (%d/%d):\n", i+1, n);
        fprintf(fbuku, "Kode Buku = %s\n", db1[i].kode_buku);
        fprintf(fbuku, "Judul Buku = %s\n", db1[i].judul_buku);
        fprintf(fbuku, "Penulis Buku = %s\n", db1[i].penulis);
        fprintf(fbuku, "Penerbit Buku = %s\n", db1[i].penerbit);
        fprintf(fbuku, "Jumlah Buku = %d\n\n", db1[i].jmlbuku);
    }
    
    
    fclose(fbuku);

}

void tampil(){
   
    char c;
    fbuku = fopen(namafile, "r");
    
    do
    {
        c = fgetc(fbuku);
        printf("%c", c);
    } while (c != EOF);
    
    fclose(fbuku);
}

void edit(){

    tampil();
    input();
}

void hapus(){
    fbuku = fopen("test.txt", "w");
    printf("Data berhasil dihapus!\n\n");
}