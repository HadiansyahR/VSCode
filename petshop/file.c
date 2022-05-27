#include <stdio.h>
#include <string.h>   
#include <stdlib.h>

int main(){
    system("cls");
    FILE *f;
    int c;
    int i, harga, total, jumlah;
    char tmp[200], kode[5], tanggal[11], nama[100];
    
    f = fopen("latihan1.txt", "w");
    printf("Kode: ");
    gets(kode);
    printf("Tanggal(dd-mm-yyyy): ");
    gets(tanggal);
    printf("Nama: ");
    gets(nama);
    printf("Harga: ");
    scanf("%d", &harga);
    fflush(stdin);
    printf("Jumlah: ");
    scanf("%d", &jumlah);
    fflush(stdin);
    total = harga * jumlah;

    fprintf(f, "====================\nPENJUALAN BARANG\n====================\n");
    fprintf(f, "Kode: %s\n", kode);
    fprintf(f, "Tanggal: %s\n", tanggal);
    fprintf(f, "Nama: %s\n", nama);
    fprintf(f, "Harga: %d\n", harga);
    fprintf(f, "Jumlah: %d\n", jumlah);
    fprintf(f, "Total: %d", total);
    fclose(f);


    f = fopen("latihan1.txt", "r");
    c = fgetc(f);
    if (c == EOF)
    {
        printf("DATA TIDAK TERSIMPAN\n");
    }
    else
    {
        printf("DATA TERSIMPAN\n");
    }
    
    
    fseek(f, 0, SEEK_SET);
    fread(tmp, sizeof(tmp), 1, f);
    printf("\n%s", tmp);
    fclose(f);

    return 0;
}