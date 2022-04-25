/*
Program  : Latihan 1
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 21-04-2022
Praktikum: [8]-[Operasi File]
*/

#include <stdio.h>
    
int main(){
    FILE *fpointer;
    fpointer = fopen("bacon.txt", "r");
    char singleline[150] = "";
    int baris = 0;
    while (!feof(fpointer))
    {
        fscanf(fpointer, "%[^\n]\n", &singleline);
        puts(singleline);
    }
    fclose(fpointer);
    return 0;
}