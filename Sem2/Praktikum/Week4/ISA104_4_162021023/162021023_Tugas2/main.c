/*
Program  : Menghitung luas persegi dan lingkaran
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 17-03-2022
Praktikum: [4]-[Fungsi & Prosedur]
*/

#include "body.c"

void main(){
    int exitstatus = 0;
    
    bdatar bdt;
    do
    {
        system("cls");
        menu(bdt);
        exitstatus = keluar();
    } while (exitstatus == 0);
    printf("\nProgram selesai.\nExit status =  %d", exitstatus);
}