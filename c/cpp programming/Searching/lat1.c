#include <stdio.h>

int main(){
    int ketemu, n, i;
    int sepatu[] = {38,41,39,44,42,43,37};
    ketemu = 0;
    i = 0;
    while (ketemu == 0 && i<7)
    {
        if (sepatu[i] == 43)
        {
            ketemu = 1;
        }else
        {
            i++;
        }
    }

    if (ketemu==1) {
        printf("Sepatu ukuran 43 ditemukan di indeks ke-%d\n",i+1);
    }else{
        printf("Tidak ditemukan");
    }

  return 0;
}