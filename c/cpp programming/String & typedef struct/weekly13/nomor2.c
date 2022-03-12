#include <stdio.h>
#include <string.h>
#define SIZE 5

typedef struct
{
    int x,y;
    char kuadran[3];
}titik;

int main(){
    int i;
    titik dataTitik[SIZE];

    for (i = 0; i < SIZE; i++)
    {        
        printf("Masukkan x indeks ke %d: ", i);
        scanf("%d", &dataTitik[i].x);
        printf("Masukkan y indeks ke %d: ", i);
        scanf("%d", &dataTitik[i].y);
    }

    printf("%13s%13s%13s\n", "X", "Y", "Kuadran");

    for (i = 0; i < SIZE; i++)
    {
        if (dataTitik[i].x > 0 && dataTitik[i].y > 0)
        {
            strcpy(dataTitik[i].kuadran, "I");
        }

        else if(dataTitik[i].x < 0 && dataTitik[i].y > 0)
        {
            strcpy(dataTitik[i].kuadran, "II");
        }

        else if(dataTitik[i].x < 0 && dataTitik[i].y < 0)
        {
            strcpy(dataTitik[i].kuadran, "III");
        }

        else if(dataTitik[i].x > 0 && dataTitik[i].y < 0)
        {
            strcpy(dataTitik[i].kuadran, "IV");
        }

        //printf("%13d%13d%13s\n", dataTitik[i].x, dataTitik[i].y, dataTitik[i].kuadran);

        if (strcmp(dataTitik[i].kuadran, "III")==0)
        {
            printf("%13d%13d%13s\n", dataTitik[i].x, dataTitik[i].y, dataTitik[i].kuadran);
        }
    }    

return 0;
}