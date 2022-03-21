/*
Program  : Faktorial menggunakan sub-program
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 17-03-2022
Praktikum: [4]-[Fungsi & Prosedur]
*/

#include <stdio.h>
#include <stdlib.h>

int faktorial(int x);
int input();
void output(int hasil, int angka);

int i = 0;

int main(){
    system("cls");
    int angka = input();
    int hasil = faktorial(angka);
    output(hasil, angka);
    return 0;
}

int faktorial(int x){
    if (x == 1){
        return 1;
    }else if (x == 0){
        return 0;
    }
    else{
        return x*faktorial(x-1);
    }
}

int input(){
    int f;
    printf("Input bilangan faktorial: ");
    scanf("%d", &f);
    fgetc(stdin);

    return f;
}

void output(int hasil, int angka){
    printf("%d! = %d", angka, angka);
    for (angka = angka-1; i < angka; angka--)
    {
        printf("*%d", angka);
    }
    printf(" = %d", hasil);
}