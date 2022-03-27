/*
Program  : Penggunaan 3 metode sorting
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
void menu(angka an[], int n, int ex);
void bubble(angka an[], int n);
void output(angka an[], int n);
void insertion(angka an[], int n);
void selection(angka an[], int n);
int cont();

int main(){
    system("cls");
    int n, exitstat = 0;
    
    do{
        n = jml();
        angka an[n];
        
        input(an, n);
        menu(an, n, exitstat);
        exitstat = cont();

    }while(exitstat == 0);
    

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

void menu(angka an[], int n, int ex){
    int pil;
    menu:
    printf("\nMENU\n");
    printf("==============================\n");
    printf("1. Bubble Sort\n2. Insertion Sort\n3. Selection Sort\n4. Exit\n");
    printf("==============================\n");

    printf("Masukkan pilihan: ");
    scanf("%d", &pil);
    fgetc(stdin);
    switch (pil)
    {
    case 1:
        bubble(an, n);
        output(an, n);
        break;
    case 2:
        insertion(an, n);
        output(an, n);
        break;
    case 3:
        selection(an, n);
        output(an, n);
        break;
    case 4:
        break;
    default:
        printf("Pilihan salah, silahkan pilih lagi\n");
        goto menu;
        break;
    }
}

void bubble(angka an[], int n){
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if ((an[j].array < an[j+1].array))
            {
                tmp = an[j].array;
                an[j].array = an[j+1].array;
                an[j+1].array = tmp;
            }   
        }      
    }
}

void insertion(angka an[], int n){
    int d;
    for (i = 1; i <= (n-1); i++)
    {
        d = i;
        while (d > 0 && an[d-1].array < an[d].array)
        {
            tmp = an[d].array;
            an[d].array = an[d-1].array;
            an[d-1].array = tmp;
            d--;
        }
    }
}

void selection(angka an[], int n){
    int position;
    for (i = 0; i < n-1; i++)
    {
        position = i;
        for (j = i+1; j < n; j++)
        {
            if (an[position].array < an[j].array)
            {
                position = j;
            }
        }
        if (position != i){
            tmp = an[i].array;
            an[i].array = an[position].array;
            an[position].array = tmp;
        }
    }
}

void output(angka an[], int n){
    printf("Output in descending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", an[i].array);
    }
    printf("\n");
}

int cont(){
    int stat;
    char ch;
    printf("\nKeluar? y/n: ");
    scanf("%c", &ch);
    fgetc(stdin);
    
    //Ternary condition
    stat = (ch == 'y' || ch == 'Y') ? 1 : 0;
    return stat;
}