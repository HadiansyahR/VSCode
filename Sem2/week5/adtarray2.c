#include <stdio.h>
typedef struct
{
    char kode[5], nama[20];
    char nilai;
}mahasiswa;

int i,n;

int main(){
    printf("Latihan 2\n");
    printf("NIM: 162021023\n");
    printf("Nama: Muhammad Hadiansyah Rabbani\n\n");

    printf("Masukkan Jumlah Matakuliah: ");
    scanf("%d", &n);
    mahasiswa mhs[n];

    for (i = 0; i < n; i++)
    {
        printf("Kode Matakuliah: ");
        scanf("%s", mhs[i].kode);
        printf("Nama Matakuliah: ");
        scanf("%s", mhs[i].nama);
        printf("Nilai Matakuliah: ");
        scanf("%s", &mhs[i].nilai);
    }

    printf("Keluaran Nilai Matakuliah:\n");
    for (i = 0; i < n; i++)
    {
        printf("=========================================\n");
        printf("Kode Matakuliah | Nama Matakuliah | Nilai\n");
        printf("%s\t\t %s\t   %c\n", mhs[i].kode, mhs[i].nama, mhs[i].nilai);
        printf("=========================================\n");
    }
    
    return 0;
}