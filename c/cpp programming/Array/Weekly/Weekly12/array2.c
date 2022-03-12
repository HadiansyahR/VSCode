#include <stdio.h>
#include <stdbool.h>
#include <math.h>

float *input(float *input, int n);
void tampil(float elm[], int n);
void even(float elm[], int n);

float *input(float *inp, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Masukkan elemen array: ");
        scanf("%f", &inp[i]);
    }
    return inp;
}

void tampil(float elm[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Elemen ke %d = %.2f\n", i, elm[i]);
    }
}

void even(float elm[], int n){
    float convarr[n];
    for (int i = 0; i < n; i++)
    {
        convarr[i] = elm[i]*100;
        if ((int)convarr[i]%2==0)
        {
            printf("Indeks ke %d = %.2f angka Genap\n", i, elm[i]);
        }     
    }
}
int main(){
    int n, i;
    float *pntarray;

    printf("Masukkan jumlah indeks: ");
    scanf("%d", &n);

    float array[n];
    float convarr[n];
    
    pntarray = input(array, n);
    tampil(pntarray, n);
    printf("\n");
    even(pntarray, n);
    
return 0;    
}