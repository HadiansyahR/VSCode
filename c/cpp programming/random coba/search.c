#include <stdio.h>
#include <string.h>
#define SIZE 7

typedef struct
{
    int kode, jumlah;
    char nama[50];
}prod;

int main(){
    int i,n;
    int high, low, mid, kondisi;
    int keycode = 4;
    prod prodi[SIZE];
    low = 0; high = SIZE; kondisi = -1;
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &prodi[i].kode);
        fgetc(stdin);
    }
    n = sizeof(prodi)/sizeof(prodi[0].kode);
    while (low<=high)
    {
        mid = (low+(high-1))/2;
        // printf("%d\t%d\t%d\n",low,mid,high);
        // printf("%d",prodi[mid].kode);
        if (keycode == prodi[mid].kode)
        {
            kondisi = mid;
        }else if (keycode < prodi[mid].kode)
        {
            high = mid - 1;
        }else
        {
            low = mid + 1;
        }      
    }
    
    if (kondisi == -1)
    {
        printf("Tidak ada");
    }else
    {
        printf("%d pada indeks %d", keycode, kondisi);
    }

    return 0;
}