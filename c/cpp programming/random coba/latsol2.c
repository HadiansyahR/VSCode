#include <stdio.h>
#include <math.h>

int main ()
{
    int n; //panjang array
    int i; //inisialisasi

    printf("Masukkan panjang array : ");
    scanf("%d",&n);

    float a[n];
    float p = 0.2;

    for(i = 0; i < n; i++)
    {
        printf("Masukkan indeks array ke-");
        scanf("%f",&a[i]);
    }
    for(i = 0; i < n; i++)
    {
        if (fmod(a[i], 2.0) == 0)
        {
            printf("\n%d",a[i]);
        }else
        {
            printf("Err");
        } 
    }
 return 0;	
}