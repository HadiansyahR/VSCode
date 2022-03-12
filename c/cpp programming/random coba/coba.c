#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>
#define MAX 100

bool even(float array, int length);

bool even(float array, int length){
    char buf[MAX];
    bool titik = false;
    float arrg[length];
    arrg[length] = array;

for (int i = 0; i < length; i++)
{
    arrg[i];
    gcvt(arrg, 3, buf);
    int l = strlen(buf);

    for (int i = l-1; i >= 0; i--)
    {
        if (buf[i] == '0' && titik == false)
        {
            continue;
        }

        if (buf[i] == '.')
        {
            titik = true;
            continue;
        }
        
        if ((buf[i])%2==0)
        {
            return true;
        }else
        {
            return false;
        }
            
    }
    }  
    //printf("buf %s\nlen %d", buf, l);
}

int main(){
    int n, i; //panjang array, counter
    bool result;
    printf("Masukkan indeks array: ");
    scanf("%d", &n);

    float array[n];

    for (i = 0; i < n; i++)
    {
        printf("Masukkan elemen array: ");
        scanf("%d", &array[i]);
    }
    

    //array[0] = 2.23;

    for (i = 0; i < n; i++)
    {
        result = even(array[n], n);
        if(result = true)
        {
            printf("Genap");
        }else{
            printf("Ganjil");
        }
    }
return 0;
}