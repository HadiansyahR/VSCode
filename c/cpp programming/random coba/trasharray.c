#include <stdio.h>
#include <stdbool.h>
#include <math.h>

float *input(float *input, int n);
void tampil(float elm[], int n);
bool genap(float elm[], int n);

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

bool genap(float elm[], int n){
    for (int i = 0; i < n; i++)
    {
        if (fmod(elm[i]*100, 2)==0)
        {
            return true;
        }else
        {
            return false;
        }
    }
}

int main(){
    int n, i;
    float *pntarray;

    printf("Masukkan jumlah indeks: ");
    scanf("%d", &n);

    float array[n];

    pntarray = input(array, n);
    tampil(pntarray, n);
    if (genap(pntarray, n))
    {
        printf("Genap");
    }else
    {
        printf("Ganjil");
    }
    

return 0;    
}