/*
Program  : Latihan 5
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 14-04-2022
Praktikum: [7]-[Searching]
*/

#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "teacher teach tea";
    char search[] = "ac";
    char *ptr = strstr(str, search);

    if(ptr != NULL)
        printf("'%s' Contains '%s'\n", str, search);
    else
        printf("'%s' Doesn't Contains '%s'\n", str, search);

    return 0;
}