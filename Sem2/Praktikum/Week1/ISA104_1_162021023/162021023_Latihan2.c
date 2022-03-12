/*
Program  : Menentukan gender
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 24-02-2022
Praktikum: [01]-[Penggunaan switch case]
*/

#include <stdio.h>
int main(){
    char gender;
    printf("enter gender (M/m or F/f): ");
    scanf("%c", &gender);

    switch (gender)
    {
    case 'M':
    case 'm':
        printf("Male.");
        break;
    case 'F':
    case 'f':
        printf("Female.");
        break;
    default:
        printf("Unspecified Gender");
        break;
    }
    return 0;
}