#include <stdio.h>
struct Dosen
{
    int kodedosen;
    char namadosen[30];
};

struct Matakuliah
{
    char kodeMK[7], namaMK[20];
    int SKS;
};

typedef struct
{
    struct Dosen ds;
    struct Matakuliah mk;
    int NPM;
    char nama[30];
}mahasiswa;

int i,n;

int main(){
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);
    
    mahasiswa mhs[n];
    for (i = 0; i < n; i++)
    {
        printf("\nData Mahasiswa\n");
        printf("NPM: ");
        scanf("%d", &mhs[i].NPM);
        printf("Nama: ");
        scanf("%s", mhs[i].nama);

        printf("\nData Dosen\n");
        printf("Kode Dosen: ");
        scanf("%d", &mhs[i].ds.kodedosen);
        printf("Nama Dosen: ");
        scanf("%s", mhs[i].ds.namadosen);

        printf("\nData Mata Kuliah\n");
        printf("Kode Mata Kuliah: ");
        scanf("%s", mhs[i].mk.kodeMK);
        printf("Nama Mata Kuliah: ");
        scanf("%s", mhs[i].mk.namaMK);
        printf("SKS: ");
        scanf("%d", &mhs[i].mk.SKS);
    }

    for (i = 0; i < n; i++)
    {
        printf("\n==================================================");
        printf("\nOutput %d", i+1);
        printf("\nData Mahasiswa\nNPM: %d\nNama: %s\n", mhs[i].NPM, mhs[i].nama);
        printf("\nData Dosen\nKode Dosen: %d\nNama: %s\n", mhs[i].ds.kodedosen, mhs[i].ds.namadosen);
        printf("\nData Mahasiswa\nKode Mata Kuliah: %s\nNama Mata Kuliah: %s\nSKS: %d\n\n", mhs[i].mk.kodeMK, mhs[i].mk.namaMK, mhs[i].mk.SKS);
    }
    
    
    return 0;
}