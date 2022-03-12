/*
Program  : Continue
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 24-02-2022
Praktikum: [01]-[Penggunaan continue]
*/

#include <stdio.h>
 
int main(void){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};

    for (int i = 0; i < 10; i++)
    {
        if (a[i]%2 == 0)
            continue;
        printf("%d adalah bilangan ganjil\n", a[i]);
    }
    
    return 0;
}