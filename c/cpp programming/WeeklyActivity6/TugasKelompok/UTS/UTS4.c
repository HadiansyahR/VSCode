#include <stdio.h>
int main(){
    /*
    Target penjualan 72
    Harga produk $46
    Sales menerima gaji perminggu $200
    ditambah komisi 9% dari total penjualan produk
    Jika produk terjual melebihi target akan dapat bonus $8 per kelebihan produk
    Jika tidak mencapai target akan mendapat potongan gaji sebesar 5% gaji total*/

    int penjualan, hg_produk=46;
    float total_gaji;
    scanf("%i", &penjualan);

    if (penjualan>72)
    {
        total_gaji = 200 + (0.09*(46*72));
        total_gaji = total_gaji + (8*(penjualan-72));
    }
    else if (penjualan==72)
    {
        total_gaji = 200 + (0.09*(46*penjualan));
    }
    else
    {
        total_gaji = 200 + (0.09*(46*penjualan));
        total_gaji = total_gaji - (0.05*total_gaji);
    }
    printf("%2.3f", total_gaji);

return 0; 
}