#include <stdio.h>
#include <string.h>

int main(){
    char str1[20];
    char str2[]="Selamat datang";
    // copy str2 ke str1
    strcpy(str1, str2);
    // maka sekarang str1 akan berisi:
    printf("isi str1: %s\n", str1);
return 0;
}
