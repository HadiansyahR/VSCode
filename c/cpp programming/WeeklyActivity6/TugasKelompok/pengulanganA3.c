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
/*Program ini akan melakukan penjumlahan angka x dengan sum, penjumlahan ini 
akan terus berlangsung sampai user menginputkan nilai x dengan value 999 karena
perulangan pada program ini memiliki kondisi x tidak sama dengan(!=) 999. Jadi
ketika perulangan ini belum menemukan input dengan value 999 maka perulangan
tidak akan berhenti.*/