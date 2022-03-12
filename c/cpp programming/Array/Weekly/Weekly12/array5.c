#include <stdio.h>
#define SIZE 5

void ubahArray(int b[], int size);
void ubahElemenArray(int e);

int main(){
    int a[SIZE] = {0,1,2,3,4};
    int i;
    printf("--Dampak melewatkan array dengan pass by reference--\n\n");

    printf("Elemen array sebelum diubah:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%3d", a[i]);
    }
    printf("\n");

    ubahArray(a, SIZE);

    printf("Elemen array setelah diubah oleh fungsi ubahArray:\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%3d", a[i]);
    }
    printf("\nPerhatikan, elemen array a berubah karena, mengapa?\n");
    
    printf("\n\n--Dampak melewatkan elemen array dengan pass by value--\n\n");

    printf("Elemen a[3] sebelum dilewatkan ke fungsi ubahElemenArray: %d\n", a[3]);
    ubahElemenArray(a[3]);

    printf("\nElemen a[3] setelah dilewatkan ke fungsi ubahElemenArray: %d\n", a[3]);
    printf("Perhatikan, a[3] tidak berubah, mengapa?\n");
    return 0;
}
void ubahArray(int b[], int size){
    int j;

    for (j = 0; j < size; j++)
    {
        b[j] *= 2;
    }
}
void ubahElemenArray(int e){
    printf("Nilai variabel e dalam fungsi ubahElemenArray: %d\n", e*=2);
}