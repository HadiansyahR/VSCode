/*
Program  : Tukar posisi x dan y
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 17-03-2022
Praktikum: [4]-[Fungsi & Prosedur]
*/

#include "stdio.h"
#include "conio.h"
#include "windows.h"

void tukar_xy(int *x , int *y);

void main(){
    struct koordinat
    {
        int x, y;
    };
    
    struct koordinat posisi = {21, 34};
    system("cls");
    printf("x, y semula ---> %d, %d\n", posisi.x, posisi.y);
    tukar_xy(&posisi.x, &posisi.y);
    printf("x, y kini ---> %d, %d\n", posisi.x, posisi.y);
    getch();
}

void tukar_xy(int *x , int *y){
    int z;

    z = *x;
    *x = *y;
    *y = z;
}