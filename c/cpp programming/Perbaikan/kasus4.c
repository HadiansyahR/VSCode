/*
NRP: 162021023
Nama: Muhammad Hadiansyah Rabbani
Kode program ini benar-benar hasil pengerjaan saya tanpa bekerja
sama atau copy-paste dari sumber lain.
*/
#include <stdio.h>

int main(){
    int i = 3,n,total = 0;

    printf("Input \t: ");
    scanf("%d",&n);

    printf("Output\t: ");
    while (i<n)
    {
        if (i%2 == 0)
        {
            printf("%d ", i);
            total = total + i;
        }
        i+=3;
    }
    printf("\nTotal jumlah deret: %d", total);
    
    return 0;
}