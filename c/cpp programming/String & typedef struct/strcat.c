#include <stdio.h>
#include <string.h>

int main(){
char str1[25]="Prodi ";
char str2[25]="Sistem Informasi";
// tambahkan str2 di belakang str1
strcat(str1, str2);
// maka sekarang str1 akan berisi:
printf("isi str1: %s\n", str1);
return 0;
}
