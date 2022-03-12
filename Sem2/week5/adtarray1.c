#include <stdio.h>
typedef struct
{
    int kode;
    char nama[10], jenis[10];
}kendaraan;
int i,n;

int main(){
    printf("Latihan 1\n\n");
    printf("Masukkan Jumlah Kendaraan: ");
    scanf("%d", &n);

    kendaraan kd[n];
    printf("\nInputan data kendaraan \n");
    for (i = 0; i < n; i++)
    {
        printf("Masukkan kode kendaraan: ");
        scanf("%d", &kd[i].kode);
        printf("Masukkan nama kendaraan: ");
        scanf("%s", kd[i].nama);
        printf("Masukkan jenis kendaraan: ");
        scanf("%s", kd[i].jenis);
    }
    
    printf("\nOutput data kendaraan: \n");
    for (i = 0; i < n; i++)
    {
        printf("Kode: %d\nNama: %s\nJenis: %s\n", kd[i].kode, kd[i].nama, kd[i].jenis);
    }
    return 0;
}