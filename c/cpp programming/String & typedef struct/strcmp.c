#include <stdio.h>
#include <string.h>

int main(){
    int hasil;
    char str1[] = "sepatu";
    char str2[] = "Sepatu";

    // nilai return hasil membandingkan
    hasil = strcmp(str1, str2);
    if (hasil == 0){
    printf("Kedua string sama");
    } else {
    printf("Kedua string tidak sama");
    }
return 0;
}

//Kenapa tidak sama? Karena huruf s pada str1 lowercase dan pada str2 uppercase