/*
Program  : Latihan 2
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 21-04-2022
Praktikum: [8]-[Operasi File]
*/

#include <string.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#define laptop 1

void xy(int x, int y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
}
struct data_laptop
{
    char kode_laptop[8];
    char nama_laptop[15];
    char stok_laptop[10];
    int harga_laptop;
} Dl;

int n, i, offset;
char namafile[20];
FILE *f_struktur;

void buat()
{
    system("cls");
    printf("Buat file : ");
    scanf("%s", namafile);
    if ((f_struktur = fopen(namafile, "wb")) == NULL)
    {
        puts("File tak dapat diciptakan !\r\n");
    }
    printf("\nInput Data : \n");
    printf("Masukkan Kode laptop ");
    scanf("%s", &Dl.kode_laptop);
    printf("Masukkan Nama laptop ");
    scanf("%s", &Dl.nama_laptop);
    printf("Masukkan Stok laptop ");
    scanf("%s", &Dl.stok_laptop);
    printf("Masukkan Harga laptop ");
    scanf("%i", &Dl.harga_laptop);

    fprintf(f_struktur, "Input Data :\n");
    fprintf(f_struktur, "\nMasukkan Kode Laptop = %s\n", Dl.kode_laptop);
    fprintf(f_struktur, "\nMasukkan Nama Laptop = %s\n", Dl.nama_laptop);
    fprintf(f_struktur, "\nMasukkan Stok Laptop = %s\n", Dl.stok_laptop);
    fprintf(f_struktur, "\nMasukkan Harga Laptop = %i\n", Dl.harga_laptop);
    fclose(f_struktur);
}

void tampil()
{
    system("cls");
    fread(&Dl, sizeof(Dl), 1, f_struktur);
    f_struktur = fopen(namafile, "rb");

    printf("\nMasukkan Kode Laptop = %s\n", Dl.kode_laptop);
    printf("\nMasukkan Nama Laptop = %s\n", Dl.nama_laptop);
    printf("\nMasukkan Stok Laptop = %s\n", Dl.stok_laptop);
    printf("\nMasukkan Harga Laptop = %i\n", Dl.harga_laptop);
    fclose(f_struktur);
    getch();
}

void edit()
{
    system("cls");
    fread(&Dl, sizeof(Dl), 1, f_struktur);

    printf("\nMasukkan Kode Laptop = %s\n", Dl.kode_laptop);
    printf("\nMasukkan Nama Laptop = %s\n", Dl.nama_laptop);
    printf("\nMasukkan Stok Laptop = %s\n", Dl.stok_laptop);
    printf("\nMasukkan Harga Laptop = %i\n", Dl.harga_laptop);

    fseek(f_struktur, offset, 0);

    printf("\nMasukkan Kode Laptop ");
    scanf("%s", &Dl.kode_laptop);
    printf("\nMasukkan Nama Laptop ");
    scanf("%s", &Dl.nama_laptop);
    printf("\nMasukkan Stok Laptop ");
    scanf("%s", &Dl.stok_laptop);
    printf("\nMasukkan Harga Laptop ");
    scanf("%i", &Dl.harga_laptop);

    fwrite(&Dl, sizeof(Dl), 1, f_struktur);
}

void hapus()
{
    system("cls");
    f_struktur = fopen(namafile, "w");
    printf("Data terhapus . . .");
    fclose(f_struktur);
    getch();
}

int main()
{

    int pil;

    do
    {
        system("cls");
        printf("\t\t\n");
        printf("\t\t MENU PENJUALAN LAPTOP\n");
        printf("\t\t JUALAN LAH\n");
        printf("\t\t\n");
        printf("\t\t 1. Buat file dan Input Data\n");
        printf("\t\t 2. Tampilkan Data\n");
        printf("\t\t 3. Edit Data\n");
        printf("\t\t 4. Hapus Data\n");
        printf("\t\t 0. Keluar\n");
        printf("\t\t\n");
        printf("\t\t Pilih Menu\n");
        printf("\t\t\n");
        xy(30, 10);
        scanf("%d", &pil);

        switch (pil)
        {
        case 1:
            buat();
            getch();
            break;
        case 2:
            tampil();
            getch();
            break;
        case 3:
            edit();
            getch();
            break;
        case 4:
            hapus();
            getch();
            break;
        case 0:
            break;
        default:
            printf("Input Salah !");
        }
    } while (pil != 0);
    getch();
}