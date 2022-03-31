/*
Nama/NRP: Muhammad Hadiansyah Rabbani/162021023
Tanggal Ujian: 31/03/2022
Saya berjanji tidak melakukan kecurangan pada ujian ini.
*/
#include "body.c"

int main(){
    int n;
    
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);
    fgetc(stdin);

    datakota *dk;
    dk = isiKota(n);

    menu(dk, n);
    
    return 0;
}