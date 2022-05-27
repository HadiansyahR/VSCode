#include<string.h>
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#define program 1

struct data_program
{
    char nama_file[20];
    char isi_file[900];
} DP;

int n, i, offset;
char namafile[20];
FILE *f_struktur;

void buat()
{

    printf("Masukkan Nama File = ");
    scanf("%s", &DP.nama_file);

    f_struktur = fopen(DP.nama_file, "w");
    
    fclose(f_struktur);

}
void tulis()
{   

    printf("\nMasukan Isi File = ");
    fflush(stdin);
    gets(DP.isi_file);

    f_struktur = fopen(DP.nama_file, "w");
    fprintf(f_struktur, "Nama File = %s\n", DP.nama_file);
    fprintf(f_struktur, "Isi File =\n%s\n", DP.isi_file);

    fclose(f_struktur);
}
void lihat()
{
    fread(&DP, sizeof(DP), 1, f_struktur);
    f_struktur = fopen(namafile, "rb");

    printf("\nMasukan Nama File = %s\n", DP.nama_file);
    printf("\nMasukan Isi File = %s\n", DP.isi_file);
    fclose(f_struktur);
}
void edit()
{
    fread(&DP, sizeof(DP), 1, f_struktur);

    printf("\nMasukan Nama File = %s\n", DP.nama_file);
    printf("\nMasukan Isi File = %s\n", DP.isi_file);

    fseek(f_struktur, offset, 0);

    fflush(stdin);
    printf("\nMasukan Nama File = ");
    strcpy(namafile, DP.nama_file);
    gets(DP.nama_file);
    printf("\nMasukan Isi File = ");
    gets(DP.isi_file);

    rename(namafile, DP.nama_file);

    f_struktur = fopen(DP.nama_file, "w");
    fprintf(f_struktur, "Nama File = %s\n", DP.nama_file);
    fprintf(f_struktur, "Isi File =\n%s\n", DP.isi_file);
    fclose(f_struktur);
}
void hapus ()
{
    f_struktur = fopen(DP.nama_file, "w");
    printf("Data Telah Terhapus\n");
    fclose(f_struktur);
}

int main()
{
    int pil;
    char exit = 'n';

    do
    {
        choice:
        fflush(stdin);
        printf("\n1.Membuat file\n");
        printf("2.Menulis pada file\n");
        printf("3.Melihat isi file\n");
        printf("4.Mengedit isi file\n");
        printf("5.Menghapus isi file\n");
        printf("0.Keluar\n");
        printf("Masukkan pilihan anda : ");
        scanf("%d", &pil);
        

        switch (pil)
        {
        case 1:
            buat();
            getch();
            break;
        case 2:
            tulis();
            getch();
            break;
        case 3:
            lihat();
            getch();
            break;
        case 4:
            edit();
            getch();
            break;
        case 5:
            hapus();
            getch();
            break;
        case 0:
            confirm:
            printf("Apakah ingin menutup program?? : ");
            fflush(stdin);
            scanf("%s",&exit);
            if(exit=='y' || exit == 'Y')
                break;
            else if(exit=='n' || exit=='N')
                goto choice;
            else
                printf("Pilihan salah!\n");
                goto confirm;
            break;
        default:
            printf("Input Salah!\n");
            goto choice;
            break;
        }
    } while (exit == 'n');
    getch();
}