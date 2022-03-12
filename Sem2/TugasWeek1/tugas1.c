#include <stdio.h>

int main(){
    int a,b,hasil;

    scanf("%d", &a);
    fgetc(stdin);
    scanf("%d", &b);
    fgetc(stdin);

    hasil = a + b;
    printf("Penjumlahan: %d\n", hasil);

    hasil = a * b;
    printf("Perkalian: %d\n", hasil);
    
    hasil = a - b;
    printf("Pengurangan: %d\n", hasil);
    
    return 0;
}