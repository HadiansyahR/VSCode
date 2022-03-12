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
    char string[20];
}array;

int main(){
    int i,j,k,n;
    char tmp[20];
    char chr[2] = "\0";
    printf("Masukkan panjang array: ");
    scanf("%d", &n);
    array str[n];
    
    for (i = 0; i < n; i++)
    {
        printf("Masukkan indeks ke-%d: ", i+1);
        scanf("%s", str[i].string);
    }
    
    printf("\nOutput: \n");
    for (i = 0; i < n; i++)
    {
        strcpy(tmp, str[i].string);
        chr[0] = tmp[0];

        if (strcasecmp(chr, "a")==0 || strcasecmp(chr, "u")==0)
        {
            for (j = strlen(tmp)-1; j >= 0; j--)
            {
                printf("%c", tmp[j]);
            }
            printf("\n");
        }

        else if (strcasecmp(chr, "i")==0 || strcasecmp(chr, "o")==0 || strcasecmp(chr, "e")==0)
        {
            printf("%c%c", tmp[0], tmp[strlen(tmp)-1]);
            printf("\n");
        }
    }
    
    return 0;
}

// printf("%s", chr);