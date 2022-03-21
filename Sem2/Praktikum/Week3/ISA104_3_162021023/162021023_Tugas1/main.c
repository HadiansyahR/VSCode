/*
Program  : Tugas 1
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 12-03-2022
Praktikum: [3]-[Struct dan ADT]
*/
#include "head.h"
#include "body.c"

#include <stdio.h>
    
int main(void){
    int i, n;
    n = inputjml();

    nilaimhs nmhs[n];
    inputdata(nmhs, n);
    tampil(nmhs, n);
    mean(nmhs, n);
    
    return 0;
}