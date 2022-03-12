/*
NRP: 162021023
Nama: Muhammad Hadiansyah Rabbani
Kode program ini benar-benar hasil pengerjaan saya tanpa bekerja
sama atau copy-paste dari sumber lain.
*/
#include <stdio.h>
#include <math.h>

double rumus(double x, double y, double n, int i);
double rumus(double x, double y, double n, int i){
    for (i = 1; i <= n; i++)
    {
        y = y + (pow(x, i)/(i+1));
    }
    return y;
}

int main(){
    int i;
    double x,n,y = 1, result;
    printf("x: ");
    scanf("%lf",&x);
    printf("n: ");
    scanf("%lf",&n);
    
    result = rumus(x,y,n,i);

    printf("Hasil = %.2f", result);

    return 0;
}