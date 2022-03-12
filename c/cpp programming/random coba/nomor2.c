#include <stdio.h>
#include <math.h>
int main(){
    int n, i;
    printf("Masukkan jumlah indeks: ");
    scanf("%d", &n);

    float array[n];
    float arrayconv[n];
    for (i = 0; i < n; i++)
    {
        printf("Masukkan elemen ke-%d array: ", i);
        scanf("%f", &array[i]);
    }

    for (i = 0; i < n; i++)
    {
        arrayconv[i] = array[i] * 100;
        if ((int) arrayconv[i] % 2 == 0)
        {
            printf("%.2f", array[i]);
        }
    }
return 0;   
}