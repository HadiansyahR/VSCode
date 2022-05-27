#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i,j,k;

typedef struct mataKuliah
{
    char kodeMK[8];
    char namaMK[40];
    char indeks_nilai;
    int sks;
}dataMK;

typedef struct mahasiswa
{
    int NRP;
    char nama[30];
    dataMK matkul;
}dataMhs;

int inputData(dataMhs data1[]);

int main(){
    
    return 0;
}

int inputData(dataMhs data1[]){
    int n;
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);
    fflush(stdin);

    printf("Masukkan data mahasiswa\n");
    for (i = 0; i < n; i++)
    {
        printf("NRP: ");
        scanf("%d", &data1[i].NRP);
        fgetc(stdin);

        printf("Nama: ");
        gets(data1[i].nama);
    }
    fflush(stdin);
    
    printf("Masukkan data mata kuliah\n");
    for (i = 0; i < n; i++)
    {
        printf("Kode Mata Kuliah: ");
        printf("Nama Mata Kuliah: ");
        printf("Indeks nilai(a/b/c/d/e): ");
        
    }

    return n;
}