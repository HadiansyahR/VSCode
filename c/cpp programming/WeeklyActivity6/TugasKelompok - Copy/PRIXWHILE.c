#include <stdio.h>
/*contoh baca nilai x*/
/*Jumlahkan nilai yang dibaca dengan WHILE*/
int main(){
    /*Kamus*/
    int Sum;
    int x;
    /*Program*/
    Sum = 0;            //Inisialisasi
    printf("Masukkan nilai x (int), akhiri dengan 999: ");
    scanf("%d", &x);    //First element

    while (x != 999)
    {
        Sum = Sum + x;  //Proses
        printf("Masukkan nilai x (int), akhiri dengan 999: ");
        scanf("%d", &x);//First element
    }
    
    printf("Hasil penjumlahan = %d \n", Sum);
    return 0;
}
/*Program ini akan melakukan penjumlahan angka x dengan sum*/