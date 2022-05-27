/**
Nama/NRP: Muhammad Hadiansyah Rabbani/162021023
Tanggal: 27-05-2022
Program: Nomor 2
**/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>

#define BUFF_SIZE 50

void input(int i, int n);
void tampil(int i, int n);
void update(int i, int n);
void hapus(int i, int n);
int totalLine();

typedef struct nomor2
{
    int id, kodeRak, stok;
    char nama[BUFF_SIZE];
    char jenis[BUFF_SIZE];
}barang;

int main(){
    int i, n, pil;

    menu:
    system("cls");
    printf("1. Input data\n2. Menampilkan data\n3. Update data\n4. Hapus data\n0. Exit\n\n");
    printf("Masukkan pilihan: ");
    scanf("%d", &pil);
    switch (pil)
    {
    case 1:
        input(i, n);
        goto menu;
        break;
    case 2:
        tampil(i, n);
        goto menu;
        break;
    case 3:
        update(i, n);
        goto menu;
        break;
    case 4:
        hapus(i, n);
        goto menu;
        break;
    case 0:
        exit(0);
        break;
    default:
        printf("Pilihan tidak ada!\n");
        goto menu;
        break;
    }
    
    return 0;
}

void input(int i, int n){
    system("cls");
    FILE *file;
    barang *dtb;
    printf("Masukkan banyak barang: ");
    scanf("%d", &n);
    fflush(stdin);

    dtb = malloc(sizeof(barang)*n);
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf("ID Penjualan: ");
        scanf("%d", &dtb[i].id);
        fflush(stdin);

        printf("Nama Barang: ");
        gets(dtb[i].nama);
        
        printf("Jenis Barang: ");
        gets(dtb[i].jenis);
        
        printf("Kode Rak: ");
        scanf("%d", &dtb[i].kodeRak);
        
        printf("Stok Barang: ");
        scanf("%d", &dtb[i].stok);
        fflush(stdin);

        printf("\n");
    }
    
    file = fopen("data.txt", "w");
    for (i = 0; i < n; i++)
    {
        fprintf(file, "%d\n", dtb[i].id);
        fprintf(file, "%s\n", dtb[i].nama);
        fprintf(file, "%s\n", dtb[i].jenis);
        fprintf(file, "%d\n", dtb[i].kodeRak);
        fprintf(file, "%d", dtb[i].stok);

        if (i != n-1)
        {
            fprintf(file, "\n");
        }    
    }

    fclose(file);
}

void tampil(int i, int n){
    system("cls");
    FILE *file;
    barang *dtb;
    int found = 0;
    char tmp[BUFF_SIZE];
    char key[BUFF_SIZE];

    n = totalLine();
    dtb = malloc(sizeof(barang)*n);

    file = fopen("data.txt", "r");
    for (i = 0; i < n; i++)
    {
        fscanf(file, "%d", &dtb[i].id);
        fgetc(file);
        fgets(dtb[i].nama, BUFF_SIZE, file);
        fgets(dtb[i].jenis, BUFF_SIZE, file);
        fscanf(file, "%d", &dtb[i].kodeRak);
        fgetc(file);
        fscanf(file, "%d", &dtb[i].stok);
        fgetc(file);
    }
    fclose(file);

    for (i = 0; i < n; i++)
    {
        printf("ID Penjualan: %d\n", dtb[i].id);

        strcpy(tmp, dtb[i].nama);
        tmp[strcspn(tmp, "\n")] = 0;
        printf("Nama Barang: %s\n", tmp);

        strcpy(tmp, dtb[i].jenis);
        tmp[strcspn(tmp, "\n")] = 0;
        printf("Jenis Barang: %s\n", tmp);

        printf("Kode Rak: %d\n", dtb[i].kodeRak);

        printf("Stok: %d\n", dtb[i].stok);

        if (i != n-1)
        {
            printf("\n");
        }

    }

    fflush(stdin);
    printf("\nCari berdasarkan nama barang: ");
    gets(key);

    printf("\n");
    for (i = 0; i < n; i++)
    {
        if (strstr(dtb[i].nama, key)!=NULL)
        {
            printf("ID Penjualan: %d\n", dtb[i].id);

            strcpy(tmp, dtb[i].nama);
            tmp[strcspn(tmp, "\n")] = 0;
            printf("Nama Barang: %s\n", tmp);

            strcpy(tmp, dtb[i].jenis);
            tmp[strcspn(tmp, "\n")] = 0;
            printf("Jenis Barang: %s\n", tmp);

            printf("Kode Rak: %d\n", dtb[i].kodeRak);

            printf("Stok: %d\n", dtb[i].stok);

            if (i != n-1)
            {
                printf("\n");
            }

            found++;
        }
    }

    if (found == 0){
        printf("%s tidak ditemukan.\n", key);
    }

    printf("Tekan Enter untuk melanjutkan.");
    getch();
}

void update(int i, int n){
    n = totalLine();
    input(i, n);
    printf("Update berhasil!\n");
    printf("Tekan Enter untuk melanjutkan.");
    getch();
}

void hapus(int i, int n){
    FILE *file;
    int c;
    file = fopen("data.txt", "w");
    fclose(file);

    file = fopen("data.txt", "r");
    c = fgetc(file);
    if (c == EOF)
    {
        printf("Hapus file berhasil!\n");
    }else
    {
        printf("Hapus file gagal\n");
    }
    fclose(file);
    printf("Tekan Enter untuk melanjutkan.");
    getch();
}

int totalLine(){
    FILE *file;
    int data;
    int totalLine = 0;
    bool readStatus = true;
    char c;

    file = fopen("data.txt", "r");
    do
    {
        c = getc(file);
        if (c == '\n')
        {
            totalLine = totalLine + 1;
        }
        
        if (c == EOF)
        {
            readStatus = false;
            totalLine = totalLine + 1;
        }

    } while (readStatus);
    
    data = totalLine/5;
    fclose(file);
    return data;
}