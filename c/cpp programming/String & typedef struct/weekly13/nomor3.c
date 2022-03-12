#include <stdio.h>
#include <string.h>

typedef struct
{
    int luas_tanah;
    char nama_pemilik[20], kota[15];
}tanah;

int main(){
    tanah dataTanah[6];
    int i;

    dataTanah[0].luas_tanah = 32;
    strcpy(dataTanah[0].nama_pemilik, "Indira");
    strcpy(dataTanah[0].kota, "Bandung");

    dataTanah[1].luas_tanah = 78;
    strcpy(dataTanah[1].nama_pemilik, "Judit");
    strcpy(dataTanah[1].kota, "Bandung");

    dataTanah[2].luas_tanah = 120;
    strcpy(dataTanah[2].nama_pemilik, "Aditia");
    strcpy(dataTanah[2].kota, "Cimahi");

    dataTanah[3].luas_tanah = 92;
    strcpy(dataTanah[3].nama_pemilik, "Dono");
    strcpy(dataTanah[3].kota, "Cimahi");

    dataTanah[4].luas_tanah = 150;
    strcpy(dataTanah[4].nama_pemilik, "Kevin");
    strcpy(dataTanah[4].kota, "Bogor");

    dataTanah[5].luas_tanah = 132;
    strcpy(dataTanah[5].nama_pemilik, "Andri");
    strcpy(dataTanah[5].kota, "Cimahi");

    printf("%20s%12s%18s\n", "Nama Pemilik", "Kota", "Luas Tanah");
    for (i = 0; i < 6; i++)
    {
        if (strcmp(dataTanah[i].kota, "Bandung")==0 && (dataTanah[i].luas_tanah>=39 && dataTanah[i].luas_tanah<= 700))
        {
            printf("%16s%18s%8dm persegi\n", dataTanah[i].nama_pemilik, dataTanah[i].kota, dataTanah[i].luas_tanah);
        } 
    }
    return 0;
}