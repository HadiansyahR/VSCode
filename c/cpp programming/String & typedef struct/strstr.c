#include <stdio.h>
#include <string.h>

int main(){
    char str1[]="sepatu";
    char str2[]="atu";
    //jika nilai return strstr tdk kosong
    if (strstr(str1, str2) != NULL){
    printf("str2 ditemukan\n");
    } else {
    printf("str2 tidak ditemukan\n");
    }
return 0;
}
