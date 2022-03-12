#include <stdio.h>
void menu();
void jumlah();
void kurang();
void kali();
void bagi();

int a,b,pilih;

int main(){

menu(a,b,pilih);

    switch (pilih)
    {
    case 1:
        jumlah(a,b);
        break;
    case 2:
        kurang(a,b);
        break;
    case 3:
        kali(a,b);
        break;
    case 4:
        bagi(a,b);
        break;
    default:
        printf("Pilihan tidak ada");
        break;
    }
return 0;
}
void menu(){
    printf("Masukkan a: ");
    scanf("%d", &a);
    
    printf("Masukkan b: ");
    scanf("%d", &b);

    printf("1. Tambah\t 2. Kurang \n3. Kali \t 4. Bagi\nMasukkan pilihan: ");
    scanf("%d", &pilih);
}

void jumlah(int a, int b){
    int hasil = a + b;
    printf("Hasil = %d", hasil);
}

void kurang(int a, int b){
    int hasil = a - b;
    printf("Hasil = %d", hasil);
}

void kali(int a, int b){
    int hasil = a * b;
    printf("Hasil = %d", hasil);
}

void bagi(int a, int b){
    int hasil = a / b;
    printf("Hasil = %d", hasil);
}