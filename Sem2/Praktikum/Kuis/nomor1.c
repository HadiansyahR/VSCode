/**
Nama/NRP: Muhammad Hadiansyah Rabbani/162021023
Tanggal: 27-05-2022
Program: Nomor 1
**/
#include <stdio.h>
#include <string.h>
typedef struct nomor1
{
    int  nrp;
    char nama[50];
    char prodi[30];
}mahasiswa;

int main(){
    int n, i, found = 0;
    char key[50];
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);
    fflush(stdin);
    mahasiswa mhs[n];

    for (i = 0; i < n; i++)
    {
        printf("Masukkan NRP: ");
        scanf("%d", &mhs[i].nrp);
        fflush(stdin);
        printf("Masukkan Nama: ");
        gets(mhs[i].nama);
        printf("Masukkan Program Studi: ");
        gets(mhs[i].prodi);
        printf("\n");
    }
    
    printf("Masukkan nama yang akan dicari: ");
    gets(key);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        if (strstr(mhs[i].nama, key) != NULL)
        {
            printf("NRP: %d\nNama: %s\nProgram Studi: %s\n\n", mhs[i].nrp, mhs[i].nama, mhs[i].prodi);
            found++;
        }
    }
    if (found == 0)
    {
        printf("Nama tidak ditemukan.\n");
    }
    return 0;
}