#include <stdio.h>
void hitung();
int main(){
    int x,y; //missing ";"
    scanf("%d",&x);
    scanf("%d",&y);
    hitung(x,y);
}
/* Implementasi void */
void hitung(int a, int b){ //error type pada parameter kedua
    int c;
    c = a * b; //missing ";" dan variable "C" undefined
    printf("%d",c); //variable "max" undefined
}