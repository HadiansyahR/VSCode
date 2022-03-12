#include <stdio.h>
#include "head.h"

int inputjml(){
    int a;
    printf("Masukkan jumlah data: ");
    scanf("%d", &a);
    fgetc(stdin);

    return a;
}

void inputdata(nilaimhs nilai[], int n){
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nData ke-%d\n", i+1);
        printf("Nama Mahasiswa ke-%d: ", i+1);
        gets(nilai[i].nama);
        printf("Nilai Quiz Mahasiswa ke-%d: ", i+1);
        scanf("%d", &nilai[i].quiz);
        fgetc(stdin);
        printf("Nilai UTS Mahasiswa ke-%d: ", i+1);
        scanf("%d", &nilai[i].uts);
        fgetc(stdin);
        printf("Nilai UAS Mahasiswa ke-%d: ", i+1);
        scanf("%d", &nilai[i].uas);
        fgetc(stdin);
    }
}
void tampil(nilaimhs nilai[], int n){
    int i;
    printf("\n%18s%s\n"," ", "| Hasil Inputan |");
    printf("=====================================================\n");
    printf("| No. | Nama    | Nilai Quiz | Nilai UTS | Nilai UAS |\n");
    for (i = 0; i < n; i++)
    {
        printf("| %d.  | %-8s|     %-7d|     %-6d|     %-6d|\n", i+1, nilai[i].nama, nilai[i].quiz, nilai[i].uts, nilai[i].uas);
    }
    
}
void mean(nilaimhs nilai[], int count){
    int i;
    float quiz = 0, uts = 0, uas = 0;
    for (i = 0; i < count; i++)
    {
        quiz += nilai[i].quiz;
        uts += nilai[i].uts;
        uas += nilai[i].uas;
    }
    printf("%14s%s\n", " ", "| Rata Rata Hasil Nilai |");
    printf("=====================================================\n");
    printf("Rata-rata nilai Quiz: %.2f\n", quiz/(float)count);
    printf("Rata-rata nilai UTS: %.2f\n", uts/(float)count);
    printf("Rata-rata nilai UAS: %.2f\n", uas/(float)count);
}