/*
Program  : Sorting elemen array dari [x] ke [y]
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 24-03-2022
Praktikum: [5]-[Sorting]
*/

#include <stdio.h>
#include <stdlib.h>
//ADT
typedef struct data
{
    int array;
}angka;

//global var
int i, j, tmp;

//sub-program
int jml();
void input(angka an[], int n);
void xy(int x, int y);
void insertion(angka an[], int x, int y);
void output(angka an[], int x, int y);

int main(){
    system("cls");
    int x, y, n;
    n = jml();
    angka an[n];

    input(an, n);
    if (n == 1)
    {
        printf("Output: \n%d", an[n-1].array);
        return 0;
    }
    printf("Masukkan x: ");
    scanf("%d", &x);
    fgetc(stdin);
    printf("Masukkan y: ");
    scanf("%d", &y);
    fgetc(stdin);
    insertion(an, x, y);
    return 0;
}

int jml(){
    int x;
    printf("\nMasukkan jumlah elemen: ");
    scanf("%d", &x);
    fgetc(stdin);
    return x;
}

void input(angka an[], int n){
    for (i = 0; i < n; i++)
        {
            printf("Masukkan nilai elemen ke-%d: ", i);
            scanf("%d", &an[i].array);
            fgetc(stdin);
        }
}

void xy(int x, int y){
    
}

void insertion(angka an[], int x, int y){
    int d;
    for (i = x + 1; i <= y; i++)
    {
        d = i;
        while (d > x && an[d-1].array < an[d].array)
        {
            tmp = an[d].array;
            an[d].array = an[d-1].array;
            an[d-1].array = tmp;
            d--;
        }
    }
    output(an, x, y);
}

void output(angka an[], int x, int y){
    printf("\nOutput in descending order:\n");
    for (i = x; i <= y; i++)
    {
        printf("%d\n", an[i].array);
    }
    printf("\n");
}