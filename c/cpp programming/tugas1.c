#include <stdio.h>

int main()
{
    int jamK;
    double pajak, totalUpah;

    printf("Masukkan jam kerja: \n");
    scanf("%d", &jamK);

    if(jamK <= 35){
        totalUpah = jamK*37000;
    }else{
        totalUpah = (35*37000) + ((jamK-35)*43000);
    }

    totalUpah = totalUpah+(totalUpah*75)/100;
    pajak = (totalUpah*15)/100;
    totalUpah = totalUpah-pajak;
    printf("%d", totalUpah);

    return 0;
}