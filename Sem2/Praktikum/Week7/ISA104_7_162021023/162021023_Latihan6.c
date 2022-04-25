/*
Program  : Latihan 6
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 14-04-2022
Praktikum: [7]-[Searching]
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Finding Digits Where There Could Be Digit 5236 Is Amazing";
    char digits[] = "0123456789";
    char *ptr = strpbrk(str, digits);

    if(ptr != NULL)
        printf("'%s' Contains At Least One Character From '%s'\n", str, digits);
    else
        printf("'%s' Doesn't Contains Any Characters From '%s'\n", str, digits);

    return 0;
}