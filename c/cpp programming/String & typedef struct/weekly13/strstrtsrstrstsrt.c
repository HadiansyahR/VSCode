#include <stdio.h>
#include <string.h>

int main(){
    char platnomor[8];
    char platawal[2]= "\0";
    
    strcpy(platnomor, "B123");

    platawal[0]=platnomor[0];

    printf("%s", platawal);
}