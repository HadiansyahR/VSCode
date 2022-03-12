/*
NRP: 162021023
Nama: Muhammad Hadiansyah Rabbani
Kode program ini benar-benar hasil pengerjaan saya tanpa bekerja
sama atau copy-paste dari sumber lain.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define getName(var) #var

typedef struct
{
    int NIM, nilai_alpro;
    char hasil;
    char nama[30];
}mahasiswa;

void modus(int A, int B, int C, int D, int E, int i, int n, mahasiswa* mhs);
void modus(int A, int B, int C, int D, int E, int i, int n, mahasiswa* mhs){
    printf("\nNilai paling banyak: \n");
    if (A>B && A>C && A>D && A>E)
    {
        printf("%s - %d\n", getName(A), A);
    }
    else if (B>A && B>C && B>D && B>E)
    {
        printf("%s - %d\n", getName(B), B);
    }
    else if (C>A && C>B && C>D && C>E)
    {
        printf("%s - %d\n", getName(C), C);
    }
    else if (D>A && D>B && D>C && D>E)
    {
        printf("%s - %d\n", getName(D), D);
    }
    else if(E>A && E>B && E>C && E>D)
    {
        printf("%s - %d\n", getName(E), E);
    }
    else
    {
        printf("Tidak ada modus");
    }
}

void ngulang(int i, int n, mahasiswa* mhs);
void ngulang(int i, int n, mahasiswa* mhs){
    char hsl[2] = "\0";

    printf("\nMahasiswa yang harus mengulang mata kuliah alpro: ");
    printf("\nNIM\tNama\tNilai\tHasil");
    for (i = 0; i < n; i++)
    {
        hsl[0] = mhs[i].hasil;
        if (strcmp(hsl, "D")==0 || strcmp(hsl, "E")==0)
        {
            printf("\n%d\t%s\t%d\t%c", mhs[i].NIM, mhs[i].nama, mhs[i].nilai_alpro, mhs[i].hasil);
        }
        
    }
    
}

void sort(int i, int n, mahasiswa* mhs);
void sort(int i, int n, mahasiswa* mhs){
    char tmp;
    char tmpnama[30];
    int pass, tmpnim, tmpnilai;
    for (pass = 1; pass < n; pass++)
    {
        for (i = 0; i < n-1; i++)
        {
            if (mhs[i].hasil > mhs[i+1].hasil)
            {
                tmp = mhs[i].hasil;
                mhs[i].hasil = mhs[i+1].hasil;
                mhs[i+1].hasil = tmp;

                strcpy(tmpnama, mhs[i].nama);
                strcpy(mhs[i].nama, mhs[i+1].nama);
                strcpy(mhs[i+1].nama, tmpnama);

                tmpnim = mhs[i].NIM;
                mhs[i].NIM = mhs[i+1].NIM;
                mhs[i+1].NIM = tmpnim;

                tmpnilai = mhs[i].nilai_alpro;
                mhs[i].nilai_alpro = mhs[i+1].nilai_alpro;
                mhs[i+1].nilai_alpro = tmpnilai;
            }
        }
    }
    printf("\n\nData nilai berdasarkan hasil: ");
    printf("\nNIM\tNama\tNilai\tHasil");
    for (i = 0; i < n; i++)
    {
        printf("\n%d\t%s\t%d\t%c", mhs[i].NIM, mhs[i].nama, mhs[i].nilai_alpro, mhs[i].hasil);
    }
}

void sortjum(int a, int b, int c, int d, int e, int i, int n, mahasiswa* mhs);
void sortjum(int a, int b, int c, int d, int e, int i, int n, mahasiswa* mhs){
    printf("\n\nBanyak mahasiswa untuk setiap nilai: ");
    printf("\nNilai A, %d orang", a);
    printf("\nNilai B, %d orang", b);
    printf("\nNilai C, %d orang", c);
    printf("\nNilai D, %d orang", d);
    printf("\nNilai E, %d orang", e);
}

int main(){
    int i,n;
    int A=0,B=0,C=0,D=0,E=0;

    printf("\nMasukkan jumlah mahasiswa: ");
    scanf("%d",&n);
    fgetc(stdin);
    mahasiswa mhs[n];

    for (i = 0; i < n; i++)
    {
        printf("\nMasukkan NIM: ");
        scanf("%d", &mhs[i].NIM);
        fgetc(stdin);
        
        printf("Masukkan nama: ");
        fgets(mhs[i].nama, sizeof(mhs[i].nama), stdin);
        mhs[i].nama[strlen(mhs[i].nama)-1]=0;

        printf("Masukkan nilai alpro: ");
        scanf("%d", &mhs[i].nilai_alpro);
        fgetc(stdin);
    }
    
    for (i = 0; i < n; i++)
    {
        if (mhs[i].nilai_alpro <= 34)
        {
            mhs[i].hasil = 'E';
            E++;
        }

        else if (mhs[i].nilai_alpro >= 35 && mhs[i].nilai_alpro <= 49)
        {
            mhs[i].hasil = 'D';
            D++;
        }

        else if (mhs[i].nilai_alpro >= 50 && mhs[i].nilai_alpro <= 64)
        {
            mhs[i].hasil = 'C';
            C++;
        }
        
        else if (mhs[i].nilai_alpro >= 65 && mhs[i].nilai_alpro <= 74)
        {
            mhs[i].hasil = 'B';
            B++;
        }
        
        else
        {
            mhs[i].hasil = 'A';
            A++;
        }
    }
    
    modus(A,B,C,D,E,i,n,mhs);
    ngulang(i,n,mhs);
    sort(i,n,mhs);
    sortjum(A,B,C,D,E,i,n,mhs);

    return 0;
}

// for (i = 0; i < n; i++)
    // {
    //     printf("\n%d\t%s\t%d\t%c", mhs[i].NIM, mhs[i].nama, mhs[i].nilai_alpro, mhs[i].hasil);
    // }