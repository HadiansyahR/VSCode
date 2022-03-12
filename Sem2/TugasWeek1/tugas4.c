#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Latihan membuat array\n");
    char kata[17]= "Pemrograman dasar";

    printf("Hasil yang ditampilkan: %c\n", kata[5]);
    printf("Hasil yang ditampilkan: %c\n", kata[2]);
    printf("Hasil yang ditampilkan: %c\n", kata[14]);

    printf("%s", kata);
    return 0;
}