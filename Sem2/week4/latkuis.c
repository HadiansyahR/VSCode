#include <stdio.h>
#include <string.h>
struct matkul
{
    char kodematakuliah[9];
    char namamatakuliah[30];
    int SKS;
};

int main(){
    struct matkul mk;

    printf("Kode Mata Kuliah: ");
    fgets(mk.kodematakuliah, sizeof(mk.kodematakuliah), stdin);
    mk.kodematakuliah[strlen(mk.kodematakuliah)-1]=0;

    printf("Nama Mata Kuliah: ");
    fgets(mk.namamatakuliah, sizeof(mk.namamatakuliah), stdin);
    mk.namamatakuliah[strlen(mk.namamatakuliah)-1]=0;

    printf("SKS: ");
    scanf("%d", &mk.SKS);
    fgetc(stdin);

    printf("\nKode Mata Kuliah: %s\nNama Mata Kuliah: %s\nSKS: %d\n",mk.kodematakuliah,mk.namamatakuliah,mk.SKS);
    return 0;
}