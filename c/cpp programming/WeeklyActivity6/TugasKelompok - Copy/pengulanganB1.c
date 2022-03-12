/** Anak Ayam **/
#include <stdio.h>
int main(){
    int x, i=1;
    scanf("%i", &x);
    
    while(x>i){
        if (x == 0)
        {
            break;
        }
        /**printf("Tek kotek kotek kotek\n");
        printf("Anak ayam turun berkotek\n");**/
        
        printf("Anak ayam turun %i, ", x);
        x-=1;
        printf("Mati satu tinggal %i\n", x);
    }
        printf("Anak ayam turun %i, ", x);
        printf("Mati satu tinggal induknya");
}