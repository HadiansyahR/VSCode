/*
Program  : Latihan 1
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 08-03-2022
Praktikum: [2]-[Array & Matriks]
*/

#include <stdio.h>
#define MAXROWS 10
#define MAXCOLS 10

int pilihan, keluar;
char lanjut = 'y';
int main(){
    int baris, kolom, i, j;
    int matriks1[MAXROWS][MAXCOLS];
    int matriks2[MAXROWS][MAXCOLS];
    int hasil_jumlah[MAXROWS][MAXCOLS];

    printf("Masukkan ordo matriks: ");
    scanf("%d %d", &baris, &kolom);

    do
    {
        printf("----------------------\n");
        printf("Menu Program\n");
        printf("======================\n");
        printf("1. Isi Elemen Matriks \n");
        printf("2. Tampilkan Elemen Matriks \n");
        printf("3. Penjumlahan Matriks \n");

        printf("Masukkan Pilihan Anda : ");
        scanf("%d", &pilihan);

        printf("\n");

        switch (pilihan)
        {
        case 1:
            printf("Mengisi Elemen Matriks\n");
            printf("======================\n");

            printf("Elemen Matriks I    :\n");
            for (i = 0; i < baris; i++)
            {
                for (j = 0; j < kolom; j++)
                {
                    scanf("%d", &matriks1[i][j]);
                }
            }
            printf("\n");
            printf("Mengisi Elemen Matriks\n");
            printf("======================\n");

            printf("Elemen Matriks II    :\n");
            for (i = 0; i < baris; i++)
            {
                for (j = 0; j < kolom; j++)
                {
                    scanf("%d", &matriks2[i][j]);
                }
            }
            break;
        case 2:
            printf("Tampilkan Elemen Matriks I :\n");
            for (i = 0; i < baris; i++)
            {
                for (j = 0; j < kolom; j++)
                {
                    printf("%3d", matriks1[i][j]);
                }
                printf("\n");
            }
            printf("\n");

            printf("Tampilkan Elemen Matriks II :\n");
            for (i = 0; i < baris; i++)
            {
                for (j = 0; j < kolom; j++)
                {
                    printf("%3d", matriks2[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            printf("Menampilkan Penjumlahan Matriks\n");
            printf("======================\n");
            for (i = 0; i < baris; i++)
            {
                for (j = 0; j < kolom; j++)
                {
                    hasil_jumlah[i][j] = matriks1[i][j] + matriks2[i][j];
                    printf("%3d", hasil_jumlah[i][j]);
                }
                printf("\n");
            }
            break;
        default:
            printf("Pilihan tidak ada\n");
            break;
        }
        printf("Lanjut (y/n): ");
        scanf("%s", &lanjut);
        if (lanjut == 'n' || lanjut == 'N')
        {
            keluar = 1;
            printf("Anda telah keluar dari program, Terima kasih!");
        }
    } while (!keluar);
    
    return 0;
}