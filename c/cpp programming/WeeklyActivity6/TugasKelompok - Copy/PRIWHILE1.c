#include <stdio.h>
/*Baca N*/
/*Print i=1 s/d N dengan while (ringkas)*/
int main(){
    /*Kamus*/
    int N;
    int i = 1;
    /*Program*/
    printf("Nilai N>0 = ");
    scanf("%d", &N);
    printf("Print i denngan WHILE (ringkas): \n");
    while (i<=N)
    {
        printf("%d\n", i++);
    }
    /*(i > N)*/
    return 0;    
}

/*Program ini menggunakan perulangan WHILE untuk melakukan looping
sehingga perulangan ini dari segi penulisan lebih ringkas dibandingkan
yang menggunakan perulangan FOR. Program ini akan menghasilkan output
angka dari 1 s/d N dengan N = angka pilihan user. Pada perulangan
WHILE increment dan inisialisasi nilai tidak dimasukkan satu baris
dengan kondisi*/