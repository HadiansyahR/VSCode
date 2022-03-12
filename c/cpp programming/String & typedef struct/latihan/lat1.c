#include <stdio.h>
#include <string.h>

typedef struct {
    char kode[20];
    char nama[20];
    float harga;
} data_produk;

int main(){
    data_produk produk[8];
    int i;
    strcpy(produk[0].kode,"A002");
    strcpy(produk[0].nama,"Sepatu");
    produk[0].harga= 248.6;
    
    strcpy(produk[1].kode,"A032");
    strcpy(produk[1].nama,"Sandal");
    produk[1].harga= 112.3;
    
    strcpy(produk[2].kode,"B021");
    strcpy(produk[2].nama,"Blouse");
    produk[2].harga= 67;

    for (i = 0; i < 8; i++)
    {
        if (produk[i].harga > 100)
        {
            printf("%d %s\t%s\t%.2f\n",i+1,produk[i].kode,produk[i].nama,produk[i].harga);
        }
    }
    
    return 0;
}