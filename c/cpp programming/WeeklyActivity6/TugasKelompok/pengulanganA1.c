#include <stdio.h>
/*Baca N, print 1 s/d N dengan FOR*/
int main(){
    /*Kamus*/
    int i;
    int N;
    
    /*Program*/
    printf("Baca N, print 1 s/d N\n");
    printf("N = ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        printf("%d \n", i);
    };
    printf("Akhir program\n");
    
    return 0;
}

/*Program ini menggunakan perulangan FOR untuk melakukan looping
sehingga perulangan ini dari segi penulisan lebih panjang dibandingkan
yang menggunakan perulangan WHILE. Program ini akan menghasilkan output
angka dari 1 s/d N dengan N = angka pilihan user. Pada perulangan FOR
increment(i++) disimpan satu baris dengan kondisi dan inisialisasi nilai*/