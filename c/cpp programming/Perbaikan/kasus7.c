/*
NRP: 162021023
Nama: Muhammad Hadiansyah Rabbani
Kode program ini benar-benar hasil pengerjaan saya tanpa bekerja
sama atau copy-paste dari sumber lain.
*/
#include <stdio.h>
#include <string.h>

typedef struct
{
    char string[50];
}array;

int main(){
    int i,n;
    
    scanf("%d", &n);
    array starr[n];

    for (i = 0; i < n; i++)
    {
        printf("Input indeks ke-%d: ", i+1);
        scanf("%s", starr[i].string);
    }

    printf("\nOutput: \n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", starr[i].string);
        
        if (strstr(starr[i].string, "atar")!=NULL)
        {
            break;
        }
    }
    
    return 0;
}