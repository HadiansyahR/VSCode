#include <stdio.h>
#include <string.h>
struct mahasiswa
{
    int NPM;
    char nama[30];
    char alamat[50];
    char telepon[13];
    char prodi[20];
    char fakultas[20];
};

int main(){
    struct mahasiswa mhs;
    
    printf("NPM: ");
    scanf("%d", &mhs.NPM);
    fgetc(stdin);

    printf("Nama: ");
    fgets(mhs.nama, sizeof(mhs.nama), stdin);
    mhs.nama[strlen(mhs.nama)-1]=0;

    printf("Alamat: ");
    fgets(mhs.alamat, sizeof(mhs.alamat), stdin);
    mhs.alamat[strlen(mhs.alamat)-1]=0;

    printf("Telepon: ");
    fgets(mhs.telepon, sizeof(mhs.telepon), stdin);
    mhs.telepon[strlen(mhs.telepon)-1]=0;

    printf("Prodi: ");
    fgets(mhs.prodi, sizeof(mhs.prodi), stdin);
    mhs.prodi[strlen(mhs.prodi)-1]=0;

    printf("Fakultas: ");
    fgets(mhs.fakultas, sizeof(mhs.fakultas), stdin);
    mhs.fakultas[strlen(mhs.fakultas)-1]=0;

    printf("NPM: %d\n", mhs.NPM);
    printf("Nama: %s\n", mhs.nama);
    printf("Alamat: %s\n", mhs.alamat);
    printf("Telepon: %s\n", mhs.telepon);
    printf("Prodi: %s\n", mhs.prodi);
    printf("Fakultas: %s\n", mhs.fakultas);

    return 0;
}