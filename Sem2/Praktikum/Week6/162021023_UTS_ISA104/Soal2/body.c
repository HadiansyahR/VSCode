/*
Nama/NRP: Muhammad Hadiansyah Rabbani/162021023
Tanggal Ujian: 31/03/2022
Saya berjanji tidak melakukan kecurangan pada ujian ini.
*/
#include "head.h"

datakota *isiKota(int n){
    datakota *dtk = malloc(sizeof(struct main)*n);    
    for (i = 0; i < n; i++)
    {
        dtk[i].nmr = i;
        printf("Data ke-%d\n", i+1);
        printf("Masukkan x: ");
        scanf("%f", &dtk[i].x);
        fgetc(stdin);
        printf("Masukkan y: ");
        scanf("%f", &dtk[i].y);
        fgetc(stdin);
        printf("Masukkan nama: ");
        gets(dtk[i].nama);
    }
    return dtk;
}

void cetakKota(datakota dk[], int n){
    int d;
    for (i = 1; i <= (n-1); i++)
    {
        d = i;
        while (d > 0 && dk[d-1].nmr > dk[d].nmr)
        {
            tempNo = dk[d].nmr;
            dk[d].nmr = dk[d-1].nmr;
            dk[d-1].nmr = tempNo;

            tempX = dk[d].x;
            dk[d].x = dk[d-1].x;
            dk[d-1].x = tempX;

            tempY = dk[d].y;
            dk[d].y = dk[d-1].y;
            dk[d-1].y = tempY;

            strcpy(tempN, dk[d].nama);
            strcpy(dk[d].nama, dk[d-1].nama);
            strcpy(dk[d-1].nama, tempN);

            d--;
        }
    }
    
    printf("\n|=======================================|\n");
    printf("|%-6s|%-5s|%-5s|%-20s|\n", "Indeks", "X", "Y", "Nama Kota");
    printf("|=======================================|\n");
    for (i = 0; i < n; i++)
    {
        printf("|%-6d|%-5.1f|%-5.1f|%-20s|\n", dk[i].nmr, dk[i].x, dk[i].y, dk[i].nama);
    }
    printf("|=======================================|\n");
}

void urutXInsertionSort(datakota dk[], int n){
    int d;
    for (i = 1; i <= (n-1); i++)
    {
        d = i;
        while (d > 0 && dk[d-1].x > dk[d].x)
        {
            tempNo = dk[d].nmr;
            dk[d].nmr = dk[d-1].nmr;
            dk[d-1].nmr = tempNo;

            tempX = dk[d].x;
            dk[d].x = dk[d-1].x;
            dk[d-1].x = tempX;

            tempY = dk[d].y;
            dk[d].y = dk[d-1].y;
            dk[d-1].y = tempY;

            strcpy(tempN, dk[d].nama);
            strcpy(dk[d].nama, dk[d-1].nama);
            strcpy(dk[d-1].nama, tempN);

            d--;
        }
    }

    printf("\n|=======================================|\n");
    printf("|%-6s|%-5s|%-5s|%-20s|\n", "Indeks", "X", "Y", "Nama Kota");
    printf("|=======================================|\n");
    for (i = 0; i < n; i++)
    {
        printf("|%6d|%5.1f|%5.1f|%20s|\n", dk[i].nmr, dk[i].x, dk[i].y, dk[i].nama);
    }
    printf("|=======================================|\n");
}

void urutYInsertionSort(datakota dk[], int n){
    int d;
    for (i = 1; i <= (n-1); i++)
    {
        d = i;
        while (d > 0 && dk[d-1].y < dk[d].y)
        {
            tempNo = dk[d].nmr;
            dk[d].nmr = dk[d-1].nmr;
            dk[d-1].nmr = tempNo;
            
            tempX = dk[d].x;
            dk[d].x = dk[d-1].x;
            dk[d-1].x = tempX;

            tempY = dk[d].y;
            dk[d].y = dk[d-1].y;
            dk[d-1].y = tempY;

            strcpy(tempN, dk[d].nama);
            strcpy(dk[d].nama, dk[d-1].nama);
            strcpy(dk[d-1].nama, tempN);

            d--;
        }
    }

    printf("\n|=======================================|\n");
    printf("|%-6s|%-5s|%-5s|%-20s|\n", "Indeks", "X", "Y", "Nama Kota");
    printf("|=======================================|\n");
    for (i = 0; i < n; i++)
    {
        printf("|%-6d|%-5.1f|%-5.1f|%-20s|\n", dk[i].nmr, dk[i].x, dk[i].y, dk[i].nama);
    }
    printf("|=======================================|\n");
}

void menu(datakota dk[], int n){
    int pil;
    
    menu:
    printf("\nMenu\n");
    printf("1. Tampilkan data \n2. Sorting X(ascending)\n3. Sorting Y(descending)\n4. Exit\n");
    printf("Masukkan pilihan: ");
    scanf("%d", &pil);
    fgetc(stdin);
    switch (pil)
    {
    case 1:
        cetakKota(dk, n);
        goto menu;
        break;
    case 2:
        urutXInsertionSort(dk, n);
        goto menu;
        break;
    case 3:
        urutYInsertionSort(dk, n);
        goto menu;
        break;
    case 4:
        break;
    default:
        printf("Pilihan salah!");
        goto menu;
        break;
    }
}