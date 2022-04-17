/*
Program  : Tugas 1
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 14-04-2022
Praktikum: [7]-[Searching]
*/

#include <stdio.h>
#include <string.h>

int main(){
    int i, j, k, n, len;
    char last[3] = "\0";

    scanf("%d", &n);
    printf("\n");
    char array[n][30];

    for (i = 0; i < n; i++)
    {
        scanf("%s", array[i]);
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        len = strlen(array[i]);

        k = 0;
        for (j = len-2; j < len; j++)
        {
            last[k] = array[i][len-2+k];
            k++;
        }
        
        if (strcmp(last, "gi")==0)
            printf("%s\n", array[i]);
        else if (strcmp(last, "ng")==0)
            printf("%s\n", array[i]);
        else if (strcmp(last, "an")==0)
            printf("%s\n", array[i]);
    }
    
    return 0;
}