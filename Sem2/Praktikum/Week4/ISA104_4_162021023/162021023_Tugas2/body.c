#include "head.h"
#include <stdio.h>
#include <stdlib.h>

void headmenu(){
    printf("\n+=====================================+\n");
    printf("|MENGHITUNG LUAS PERSEGI DAN LINGKARAN|\n");
    printf("\n+=====================================+\n");
    printf("|  %-35s|\n", "1. PERSEGI");
    printf("|  %-35s|\n", "2. LINGKARAN");
    printf("+=====================================+\n");
}

int pilihmenu(){
    int pilihan;
    printf("\nMasukkan pilihan Anda(1/2): ");
    scanf("%d", &pilihan);
    fgetc(stdin);
    return pilihan;
}

void menu(bdatar bdt){
    int pil;
    menu:
        headmenu();
        pil = pilihmenu();
        
        switch (pil)
        {
        case 1:
            printf("\n=== Menghitung Luas Persegi ===\n");
            bdt = input(pil);
            luasP(bdt);
            printf("===============================\n\n");
            break;
        case 2:
            printf("\n=== Menghitung Luas Lingkaran ===\n");
            bdt = input(pil);
            luasL(bdt);
            printf("=================================\n\n");
            break;
        default:
            printf("\nPilihan Tidak Ada!\n");
            goto menu;
            break;
        }
}

bdatar input(int pil){
    bdatar bdt;
    if (pil == 1){
        printf("Masukkan panjang: ");
        scanf("%d", &bdt.ps.p);
        fgetc(stdin);
        printf("Masukkan lebar: ");
        scanf("%d", &bdt.ps.l);
        fgetc(stdin);
    }
    else if (pil == 2){
        printf("Masukkan jari-jari: ");
        scanf("%f", &bdt.round.r);
        fgetc(stdin);
    }
    
    return bdt;
}

void luasL(bdatar lingk){
    printf("Luas Lingkaran: %.2f\n", phi * (lingk.round.r*lingk.round.r));
}

void luasP(bdatar psg){
    printf("Luas Persegi: %d\n", psg.ps.l * psg.ps.p);
}

int keluar(){
    int status;
    int pil;
    printf("1. Kembali ke Menu\n");
    printf("0. Keluar\n");
    printf("Masukkan pilihan Anda: ");
    scanf("%d", &pil);
    fgetc(stdin);

    if (pil == 1)
    {
        status = 0;
    }else
    {
        status = 1;
    }
    
    return status;
}