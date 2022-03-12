#include <stdio.h>
struct transaksi{
    int harga, jumlah;
};

int total_bayar(struct transaksi x);
int total_bayar(struct transaksi x){
    int hs;
    hs = x.harga * x.jumlah;
    return hs;
}
int main(){
    struct transaksi t;
    printf("Masukkan harga: ");
    scanf("%d", &t.harga);
    printf("Masukkan jumlah: ");
    scanf("%d", &t.jumlah);

    printf("Total pembayaran: %d", total_bayar(t));
    return 0;
}

