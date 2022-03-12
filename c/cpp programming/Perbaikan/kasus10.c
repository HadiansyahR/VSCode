/*
NRP: 162021023
Nama: Muhammad Hadiansyah Rabbani
Kode program ini benar-benar hasil pengerjaan saya tanpa bekerja
sama atau copy-paste dari sumber lain.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char merk[20];
    int harga;
    int stok;
}laptop;


int main(){
    int i,n,key, find = 0;
    printf("Masukkan panjang array: ");
    scanf("%d", &n);
    fgetc(stdin);
    laptop lp[n];

    for (i = 0; i < n; i++)
    {
        printf("\nMasukkan nama merk: ");
        fgets(lp[i].merk, sizeof(lp[i].merk), stdin);
        lp[i].merk[strlen(lp[i].merk)-1]=0;
        
        printf("Masukkan harga: ");
        scanf("%d", &lp[i].harga);
        fgetc(stdin);

        printf("Masukkan jumlah stok: ");
        scanf("%d", &lp[i].stok);
        fgetc(stdin);
    }
    
    printf("\nCari berdasarkan harga: ");
    scanf("%d", &key);

    printf("\nMerk\tHarga\tStok\n");
    for (i = 0; i < n; i++)
    {
        if (lp[i].harga <= key && lp[i].stok > 10)
        {
            printf("%s\t%d\t%d\n", lp[i].merk, lp[i].harga, lp[i].stok);
            find++;
        }
    }

    if (find == 0)
    {
        printf("Barang tidak ada");
    }

    return 0;
}