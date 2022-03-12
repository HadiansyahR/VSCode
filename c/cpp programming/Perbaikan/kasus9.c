/*
NRP: 162021023
Nama: Muhammad Hadiansyah Rabbani
Kode program ini benar-benar hasil pengerjaan saya tanpa bekerja
sama atau copy-paste dari sumber lain.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char merek[20];
    char rasa[20];
    int kadaluwarsa;
}mie_instant;

void sort(int n, mie_instant* mie);

void sort(int n, mie_instant* mie){
    int i;
    int pass, tmpkl;
    char tmpmrk[20], tmprs[20];

    for (pass = 1; pass < n; pass++)
    {
        for (i = 0; i < n-1; i++)
        {
            if (mie[i].kadaluwarsa > mie[i+1].kadaluwarsa)
            {
                tmpkl = mie[i].kadaluwarsa;
                mie[i].kadaluwarsa = mie[i+1].kadaluwarsa;
                mie[i+1].kadaluwarsa = tmpkl;

                strcpy(tmpmrk, mie[i].merek);
                strcpy(mie[i].merek, mie[i+1].merek);
                strcpy(mie[i+1].merek, tmpmrk);

                strcpy(tmprs, mie[i].rasa);
                strcpy(mie[i].rasa, mie[i+1].rasa);
                strcpy(mie[i+1].rasa, tmprs);
            }
            
        }
        
    }
    
}

int main(){
    int i, n, count, mcount, ycount, tmp;
    char date[9]; 
    char d[3]; 
    char y[2]; 
    char m[3];

    printf("Panjang array: ");
    scanf("%d", &n);
    fgetc(stdin);

    mie_instant mie[n];

    for (i = 0; i < n; i++)
    {
        printf("\nMerek: ");
        fgets(mie[i].merek, sizeof(mie[i].merek), stdin);
        mie[i].merek[strlen(mie[i].merek)-1]=0;
        printf("Rasa: ");
        fgets(mie[i].rasa, sizeof(mie[i].rasa), stdin);
        mie[i].rasa[strlen(mie[i].rasa)-1]=0;
        printf("*format input yyyy/mm/dd tanpa pemisah\n*cth: 20200721");
        printf("\nKadaluwarsa: ");
        scanf("%d", &mie[i].kadaluwarsa);
        fgetc(stdin);
    }

    sort(n, mie);

    printf("\nMerek\tRasa\tKadaluwarsa");

    for (i = 0; i < n; i++)
    {
        itoa(mie[i].kadaluwarsa, date, 10);//20201212

        if (mie[i].kadaluwarsa < 20211231)
        {
            printf("\n%s\t%s\t%c%c-%c%c-%c%c%c%c", mie[i].merek, mie[i].rasa, date[6], date[7], date[4], date[5], date[0], date[1], date[2], date[3]);
        }
    }

    return 0;
}