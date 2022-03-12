#include <stdio.h>
// Deklarasi tipe data bentukan/alias
typedef int bilbulat;
typedef float pecahan;

int main(){
    bilbulat a; // var a bertipe bilbulat
    pecahan b; // var b bertipe pecahan
    a = 123456;
    printf("Isi variabel a: %d \n",a);
    b = 23.4513;
    printf("Isi variabel b: %.2f \n",b);
    
return 0;
}
