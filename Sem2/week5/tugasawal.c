#include <stdio.h>
typedef struct
{
    char kode[4];
    char nama[30];
    int harga, jumlah;
}barang;

int i,j;

int main(){
    barang brg;

    printf("Transaksi Penjualan Barang\n");
    printf("Masukkan Kode Barang: ");
    scanf("%s", brg.kode);
    printf("Masukkan Nama Barang: ");
    scanf("%s", brg.nama);
    printf("Masukkan Harga Barang: ");
    scanf("%d", &brg.harga);
    printf("Masukkan Jumlah: ");
    scanf("%d", &brg.jumlah);

    printf("Hasil :\n");
    printf("====================================================\n");
    printf("%13s%14s%15s%10s\n", "Kode Barang |", " Nama Barang |", " Harga Barang |", " Jumlah |");
    printf("====================================================\n");
    printf("%s\t\t%s\t\t%d\t\t%d\n", brg.kode, brg.nama, brg.harga, brg.jumlah);
    printf("====================================================\n");
    printf("Total : %d", brg.harga*brg.jumlah);
    return 0;
}