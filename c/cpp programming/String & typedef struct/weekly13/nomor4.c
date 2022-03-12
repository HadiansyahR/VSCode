#include <stdio.h>
#include <string.h>

typedef struct
{
    char plat_nomor[6], warna_mobil[10], nama_pemilik[20];
}mobil;


int main(){
    int i, n;
    char identifier = 'D';
    //char *pntr;
    char plat[2] = "\0";
    char platAwal[8];
    
    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);
    mobil dataMobil[n];
    for (i = 0; i < n; i++)
    {        
        scanf("%s", &dataMobil[i].plat_nomor);
        scanf("%s", &dataMobil[i].warna_mobil);
        scanf("%s", &dataMobil[i].nama_pemilik);
    }
    
    for (i = 0; i < n; i++)
    {
        strcpy(platAwal, dataMobil[i].plat_nomor);
        plat[0] = platAwal[0];

        //printf("%s", plat);

        if (strchr(plat, identifier)!= NULL && (strcmp(dataMobil[i].warna_mobil, "Merah")==0 || strcmp(dataMobil[i].warna_mobil, "merah")==0))
        {
            printf("%s, %s, %s\n", dataMobil[i].plat_nomor, dataMobil[i].warna_mobil, dataMobil[i].nama_pemilik);
        }
    }
    //printf("%s, %s, %s", dataMobil[0].plat_nomor, dataMobil[0].warna_mobil, dataMobil[0].nama_pemilik);
return 0;
}