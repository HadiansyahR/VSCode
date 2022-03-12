/*
NRP: 162021023
Nama: Muhammad Hadiansyah Rabbani
Kode program ini benar-benar hasil pengerjaan saya tanpa bekerja
sama atau copy-paste dari sumber lain.
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, n, result;
    double x;
    char convert[4];
    char tmp[4];

    printf("Input panjang array: ");
    scanf("%d", &n);
    double array[n];
    
    for (i = 0; i < n; i++)
    {
        printf("Input elemen ke-%d: ", i);
        scanf("%lf", &array[i]);
        fgetc(stdin);
    }

    for (i = 0; i < n; i++)
    {
        x = array[i];
        
        snprintf(convert, 4, "%f", x);//Konversi double ke string

        result = (int)(x*100);//Dikalikan 100 karena desimalnya hanya 2 angka di belakang koma
        
        if (result%2!=0)//Pengecekan ganjil genap
        {
            printf("\nIndeks-%d adalah ganjil\n", i+1);
            printf("Angka di belakang koma: %c%c\n", convert[2],convert[3]);
        }
    }
    return 0;
}

//
    //printf("%.2f\n", x);
    //printf("result = %d\n", result);
    // printf("%d", sizeof(array)/sizeof(double));
    //printf("%s\n", conv);//3.32
    // printf("%s\n", conv);//3.32
    // printf("%c\n", conv[3]);//2
    //printf("%d\n", y);//50
    //yconv = (int) y;
    //printf("%d\n", yconv);
    // result = y/2;
    // printf("%c %d", conv[3], result);
    // 