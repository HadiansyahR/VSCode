/*
Nama/NRP: Muhammad Hadiansyah Rabbani/162021023
Tanggal Ujian: 31/03/2022
Saya berjanji tidak melakukan kecurangan pada ujian ini.
*/

#ifndef head
#define head

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i, tempNo;
float tempX, tempY;
char tempN[30];

typedef struct main
{
    int nmr;
    float x,y;
    char nama[30];
}datakota;

datakota *isiKota(int n);
void urutXInsertionSort(datakota dk[], int n);
void urutYInsertionSort(datakota dk[], int n);
void menu(datakota dk[], int n);
void cetakKota(datakota dk[], int n);

#endif