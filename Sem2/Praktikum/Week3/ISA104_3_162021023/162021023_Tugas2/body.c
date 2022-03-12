#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "head.h"

int getjurusan(mhsis mhs){
    int nrp = mhs.nrp;
    int x;
    char strj[10], a[3] = "\0";
    
    itoa(nrp, strj, 10);//convert ke string
    
    for (i = 0; i < 2; i++)//ambil 2 digit pertama
    {
        a[i] = strj[i];
    }

    x = atoi(a);//convert ke int
    return x;
}

void tampil(mhsis mhs){
    printf("\n----------Hasil----------\n");
    printf("Nama: %s\n", mhs.nama);
    printf("NRP: %d\n", mhs.nrp);
    printf("Nilai: %d\n", mhs.nilai);
}