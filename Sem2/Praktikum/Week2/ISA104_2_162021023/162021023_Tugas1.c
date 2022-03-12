/*
Program  : Tugas 1 - Operasi matriks
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 08-03-2022
Praktikum: [2]-[Array & Matriks]
*/

#include <stdio.h>
#define ROW 2
#define COL 2

int main(){
    int i,j,k;
    int exit = 0;
    int kondisi;
    int a[ROW][COL];
    int b[ROW][COL];
    int hasil[ROW][COL];
    
    do{
        printf("\n[1] Tambah\n[2] Kurang\n[3] Kali\n[0] Keluar\n");
        printf("Masukkan pilihan > ");
        scanf("%d", &kondisi);
        switch (kondisi)
        {
        case 1:
            printf("\n----Matriks A----\n");
            for (i = 0; i < ROW; i++)
            {
                for (j = 0; j < COL; j++)
                {
                    printf("Input Matriks A[%d][%d]: ", i, j);
                    scanf("%d", &a[i][j]);
                }
            }

            printf("\n----Matriks B----\n");
            for (i = 0; i < ROW; i++)
            {
                for (j = 0; j < COL; j++)
                {
                    printf("Input Matriks B[%d][%d]: ", i, j);
                    scanf("%d", &b[i][j]);
                }
            }

            for (i = 0; i < ROW; i++)
            {
                for (j = 0; j < COL; j++)
                {
                    printf("%3d ", a[i][j]);
                }

                if (i==0)
                {
                    printf("\t+\t");
                }else{
                    printf("\t \t");
                }

                for (j = 0; j < COL; j++)
                {
                    printf("%3d ", b[i][j]);
                    hasil[i][j] = a[i][j] + b[i][j];
                }
                printf("\n");
            }

            printf("Hasil pertambahan:\n");
            for (i = 0; i < ROW; i++)
            {
                for (j = 0; j < COL; j++)
                {
                    printf("%3d ", hasil[i][j]);
                }
                printf("\n");
            }
    
            break;
        case 2:
            printf("\n----Matriks A----\n");
            for (i = 0; i < ROW; i++)
            {
                for (j = 0; j < COL; j++)
                {
                    printf("Input Matriks A[%d][%d]: ", i, j);
                    scanf("%d", &a[i][j]);
                }
            }

            printf("\n----Matriks B----\n");
            for (i = 0; i < ROW; i++)
            {
                for (j = 0; j < COL; j++)
                {
                    printf("Input Matriks B[%d][%d]: ", i, j);
                    scanf("%d", &b[i][j]);
                }
            }

            for (i = 0; i < ROW; i++)
            {
                for (j = 0; j < COL; j++)
                {
                    printf("%3d ", a[i][j]);
                }

                if (i==0)
                {
                    printf("\t-\t");
                }else{
                    printf("\t \t");
                }

                for (j = 0; j < COL; j++)
                {
                    printf("%3d ", b[i][j]);
                    hasil[i][j] = a[i][j] - b[i][j];
                }
                printf("\n");
            }

            printf("Hasil pengurangan:\n");
            for (i = 0; i < ROW; i++)
            {
                for (j = 0; j < COL; j++)
                {
                    printf("%3d ", hasil[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            printf("\n----Matriks A----\n");
            for (i = 0; i < ROW; i++)
            {
                for (j = 0; j < COL; j++)
                {
                    printf("Input Matriks A[%d][%d]: ", i, j);
                    scanf("%d", &a[i][j]);
                }
            }

            printf("\n----Matriks B----\n");
            for (i = 0; i < ROW; i++)
            {
                for (j = 0; j < COL; j++)
                {
                    printf("Input Matriks B[%d][%d]: ", i, j);
                    scanf("%d", &b[i][j]);
                }
            }

            for (i = 0; i < ROW; i++)
            {
                for (j = 0; j < COL; j++)
                {
                    printf("%3d ", a[i][j]);
                }

                if (i==0)
                {
                    printf("\tx\t");
                }else{
                    printf("\t \t");
                }

                for (j = 0; j < COL; j++)
                {
                    printf("%3d ", b[i][j]);
                }
                printf("\n");
            }

            for (i = 0; i < ROW; i++)
            {
                for (j = 0; j < COL; j++)
                {
                    hasil[i][j] = 0;
                    for (k = 0; k < COL; k++)
                    {
                        hasil[i][j] += a[i][k]*b[k][j];
                    }
                }
            }
            
            printf("Hasil perkalian:\n");
            for (i = 0; i < ROW; i++)
            {
                for (j = 0; j < COL; j++)
                {
                    printf("%3d ", hasil[i][j]);
                }
                printf("\n");
            }
            break;
        case 0:
            exit = 1;
            printf("Sesi anda telah berakhir");
            break;
        default:
            printf("Pilihan tidak ada\n");
            break;
        }
    }while(exit == 0);
    
    return 0;
}