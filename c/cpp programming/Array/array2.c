#include <stdio.h>
int *inputArr(int *inp, int n);
int totalArr(int val[], int n);
void tampil(int val[], int n);

int main(){
    int n, i;
    int *valArr;

    printf("Masukkan panjang array: ");
    scanf("%d", &n);
    int val[n];
    
    valArr = inputArr(val, n);

    tampil(valArr, n);
    
    printf("\nTotal jumlah elemen array: %d", totalArr(valArr, n));
    return 0;
}

int *inputArr(int *inp, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Masukkan value indeks array: ");
        scanf("%d", &inp[i]);
    }
    return inp;
}

int totalArr(int val[], int n){
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total = total + val[i];
    }
    return total;
}

void tampil(int val[], int n){
    printf("\n%s\t%s\n", "Indeks", "Value");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t%d\n",i, val[i]);
    }
}