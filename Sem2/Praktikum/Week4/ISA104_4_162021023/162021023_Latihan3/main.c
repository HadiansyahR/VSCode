/*
Program  : Print & Konversi Waktu
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 17-03-2022
Praktikum: [4]-[Fungsi & Prosedur]
*/
#include "jam.c"
#include "stdio.h"

int main(){
    jam J1;
    jam J2;
    int dt = 5600;

    printf("Hello\n");
    ResetJam(&J1);
    TulisJam(J1);
    printf("Konversi jam ke detik: %d\n", JamToDetik(J1));
    J2 = DetikToJam(dt);
    TulisJam(J2);
    return 0;
}