/** Anak Ayam **/
#include <stdio.h>
int main(){
    int x, i=1;
    scanf("%i", &x);

    if (x == 0)
        {
            printf("Value x kosong ");
            return x;
        } 
    
    while(x>i){       
        printf("Anak ayam turun %i, ", x);
        x-=1;
        printf("Mati satu tinggal %i\n", x);
    }
        printf("Anak ayam turun %i, ", x);
        printf("Mati satu tinggal induknya");
    return 0;
}