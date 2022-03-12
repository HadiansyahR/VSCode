/*
NRP: 162021023
Nama: Muhammad Hadiansyah Rabbani
Kode program ini benar-benar hasil pengerjaan saya tanpa bekerja
sama atau copy-paste dari sumber lain.
*/
#include <stdio.h>
#include <math.h>

int main(){
    int gpokok = 200, target = 72, hproduk = 46;
    float upahJual, gtotal;
    int jumJual, n;

    printf("Jumlah produk terjual: ");
    scanf("%d", &n);

    upahJual = (hproduk * n)*0.09;
    gtotal = (float)gpokok + upahJual;

    if (n == target)
    {
        printf("Total gaji salesman minggu ini: $%.1f", gtotal);
    }else if (n>target)
    {
        jumJual = n - target;
        jumJual = jumJual * 8;
        gtotal = gtotal + (float)jumJual;
        printf("Total gaji salesman minggu ini: $%.1f", gtotal);
    }else{
        gtotal = gtotal - (gtotal*0.05);
        printf("Total gaji salesman minggu ini: $%.1f", gtotal);
    }
    printf("\nTotal gaji salesman minggu ini setelah dibulatkan: $%.1f", round(gtotal));
    return 0;
}