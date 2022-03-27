#include <stdio.h>
#include <string.h>
struct dokter{
    int kodeD;
    char namaD[50];
};

struct penyakit{
    int kodeP;
    char namaP[50];
};

typedef struct
{
    int kodePas;
    char namaPas[50], alamatPas[50], telPas[14];
    struct dokter d;
    struct penyakit p;
}pasien;

int main(){
    pasien dtpas;
    printf("Masukkan data dokter\n");
    printf("Masukkan kode dokter: ");
    scanf("%d", &dtpas.d.kodeD);
    fgetc(stdin);
    printf("Masukkan nama dokter: ");
    gets(dtpas.d.namaD);
    printf("\n");

    printf("Masukkan data penyakit\n");
    printf("Masukkan kode penyakit: ");
    scanf("%d", &dtpas.p.kodeP);
    fgetc(stdin);
    printf("Masukkan nama penyakit: ");
    gets(dtpas.p.namaP);
    printf("\n");

    printf("Masukkan data pasien\n");
    printf("Masukkan kode pasien: ");
    scanf("%d", &dtpas.kodePas);
    fgetc(stdin);
    printf("Masukkan nama pasien: ");
    gets(dtpas.namaPas);
    printf("Masukkan alamat pasien: ");
    gets(dtpas.alamatPas);
    printf("Masukkan telepon pasien: ");
    gets(dtpas.telPas);
    printf("\n");

    printf("DATA RUMAH SAKIT\n\n");
    printf("Data Dokter\n");
    printf("Kode Dokter: %d\nNama Dokter: %s\n\n", dtpas.d.kodeD, dtpas.d.namaD);
    printf("Data Penyakit\n");
    printf("Kode Penyakit: %d\nNama Penyakit: %s\n\n", dtpas.p.kodeP, dtpas.p.namaP);
    printf("Data Pasien\n");
    printf("Kode Pasien: %d\nNama Pasien: %s\nAlamat Pasien: %s\nTelepon Pasien: %s\n\n", dtpas.kodePas, dtpas.namaPas, dtpas.alamatPas, dtpas.telPas);
    return 0;
}