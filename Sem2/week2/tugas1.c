#include <stdio.h>

int main(){
    int i,j,k;
    char negara[4][2][10] = {{"Indonesia", "Jakarta"},{"Filipina", "Manila"},{"Austria", "Wina"},{"India", "New Delhi"}};
    
    printf("Tugas 1!\n");
    printf(".======================.\n");
    printf("|  %s  || %s |\n", "Negara", "Ibu Kota");
    printf("|======================|\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("|%10s|", negara[i][j]);   
        }
        printf("\n");
    }
    printf("*======================*\n");
    return 0;
}