#include <stdio.h>
#include "body.c"

int main(void){
    mhsis mhs1;
    int jur;
    
    printf("----------Sikad Itenice IS----------\n\n");

    printf("Nama: ");
    gets(mhs1.nama);
    printf("NRP: ");
    scanf("%d", &mhs1.nrp);
    printf("Nilai: ");
    scanf("%d", &mhs1.nilai);

    if (getjurusan(mhs1) == 16 && mhs1.nilai > 70)
    {
        tampil(mhs1);
    }
    return 0;
}