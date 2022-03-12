/*
Program  : Latihan 2
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 08-03-2022
Praktikum: [2]-[Array & Matriks]
*/

#include <stdio.h>
#include <conio.h>

int main(){
    int A[100][100];
    int m,n,i,j;
    /*------- menentukan banyaknya baris & kolom matriks -------*/
    printf("Matriks berordo m x n \n");
    printf("=====================\n");
    printf("Masukkan banyaknya baris (m) : ");
    scanf("%d", &m);
    printf("Masukkan banyaknya kolom (n) : ");
    scanf("%d", &n);
    printf("\n");

    /*------- input elemen matriks -------*/
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Elemen matriks A[%d, %d] : ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }   
    }
    /*------- menampilkan elemen matriks -------*/
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%3d", A[i][j]);
        }
        printf("\n");
    }
    getch();
}