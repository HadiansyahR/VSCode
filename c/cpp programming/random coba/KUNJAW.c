#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdbool.h>

#define MAX 100
int gcvt();
bool even(float array);

bool even(float array){
    char buf[MAX];
    gcvt(array, 3, buf);
    
    int l = strlen(buf);
    bool titik = false;

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
            printf("buf %s\nlen %d\n", buf, l);
            return true;
        }else
        {
            printf("buf %s\nlen %d\n", buf, l);
            return false;
        }      
    }
}

int main(){
    int n, i; //panjang array, counter

    // printf("Masukkan indeks array: ");
    // scanf("%d", &n);

    float array[1];

    array[0] = 2.23;

    if(even(array[0]))
    {
        printf("Genap");
    }else{
        printf("Ganjil");
    }
return 0;
}