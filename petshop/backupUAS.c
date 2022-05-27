#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

#define USERNAME_MAX 30
#define PASSWORD_MAX 9
#define BUFFER_SIZE 256

typedef struct dataBuku
{
    int isbn;
    char judulBuku[BUFFER_SIZE];
    char penulis[BUFFER_SIZE];
    char publisher[BUFFER_SIZE];
    int tahunTerbit;
    int stok;
}buku;

typedef struct transaksi{
    char namaPeminjam[USERNAME_MAX];
    int durasiPinjam;
}dtTransaksi;

void menuLogin(int i, int n);

void daftarAdmin(int i);
void loginAdmin(int i);

void daftarUser(int i);
void loginUser(int i);
void sessionInfo();

void mainMenuAdmin(int i);
void inputDataBuku(int i);
void cekDataTransaksi(int i);

void mainMenuUser(int i);
void lihatBuku(int i);
void pinjamBuku(int i);


buku *sortByName(int i, int n, buku listBuku[]);
int main(int argc, char *argv[]){
    FILE *file;
    int i, n;

    menuLogin(i, n);

    return 0;
}

void menuLogin(int i, int n){
    // system("cls");
    int pilihan;
    FILE *file;
    menu:
    printf("Selamat Datang!\n");
    printf("Login Sebagai: \n1. Admin\n2. User\n");
    printf("Masukkan pilihan: ");
    scanf("%d", &pilihan);
    fflush(stdin);
    switch (pilihan)
    {
    case 1:
        file = fopen("admin.txt", "r");
        if (file == NULL)
        {
            daftarAdmin(i);
        }
        else
        {
            loginAdmin(i);
        }
        break;
    case 2:
        file = fopen("user.txt", "r");
        if (file == NULL)
        {
            daftarUser(i);
        }
        else
        {
            loginUser(i);
        }
        break;
    default:
        printf("Pilihan tidak ada!\nTekan enter untuk kembali ke menu\n");
        getch();
        goto menu;
        break;
    }
}

void daftarAdmin(int i){
    system("cls");
    FILE *file;
    char uname[USERNAME_MAX];
    char pass[PASSWORD_MAX];

    
    file = fopen("admin.txt", "w");

    printf("Sign Up\n\n");
    printf("Username(no space allowed): ");
    fgets(uname, USERNAME_MAX, stdin);
    printf("Password(max 8 character): ");
    fgets(pass, PASSWORD_MAX, stdin);
    fflush(stdin);

    fputs(uname, file);
    fputs(pass, file);

    fclose(file);

    loginAdmin(i);
}

void loginAdmin(int i){
    system("cls");
    FILE *file;
    char uname[USERNAME_MAX];
    char pass[PASSWORD_MAX];
    char tmp[USERNAME_MAX];
    char c;
    int status = 0, nstat = 0, pstat = 0;
    int totalLine = 0;
    bool readStatus = true;
    file = fopen("admin.txt", "r");
    printf("Log In\n\n");
    printf("Username: ");
    gets(uname);
    printf("Password: ");
    gets(pass);
    
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
    fseek(file, 0, SEEK_SET );
    

    for (i = 0; i < totalLine; i++)
    {
        fscanf(file, "%s", tmp);
        if (strcmp(uname, tmp) == 0)
        {
            nstat = 1;
            break;
        }
    }
    
    fseek(file, 0, SEEK_SET );
    for (i = 0; i < totalLine; i++)
    {
        fscanf(file, "%s", tmp);
        if (strcmp(pass, tmp) == 0)
        {
            pstat = 1;
            break;
        }
    }

    if (nstat == 1 && pstat == 1)
    {
        printf("Berhasil Masuk\n");
        mainMenuAdmin(i);
    }else if (nstat == 1 && pstat == 0)
    {
        printf("Password anda salah, silahkan coba lagi.\n\nTekan enter untuk melanjutkan\n");
        getch();
        loginAdmin(i);
    }else if (nstat == 0 && pstat == 1)
    {
        printf("Username anda salah, silahkan coba lagi.\n\nTekan enter untuk melanjutkan\n");
        getch();
        loginAdmin(i);
    }else
    {
        printf("Akun tidak ada, silahkan daftar terlebih dahulu.\nTekan enter untuk melanjutkan\n");
        getch();
        daftarAdmin(i);
    }
    fflush(stdin);
    fclose(file);
}

void daftarUser(int i){
    system("cls");
    FILE *file;
    char uname[USERNAME_MAX];
    char pass[PASSWORD_MAX];

    
    file = fopen("user.txt", "w");

    printf("Sign Up\n\n");
    printf("Username(no space allowed): ");
    fgets(uname, USERNAME_MAX, stdin);
    printf("Password(max 8 character): ");
    fgets(pass, PASSWORD_MAX, stdin);
    fflush(stdin);

    fputs(uname, file);
    fputs(pass, file);

    fclose(file);

    loginUser(i);
}

void loginUser(int i){
    system("cls");
    FILE *file;
    char uname[USERNAME_MAX];
    char pass[PASSWORD_MAX];
    char tmp[USERNAME_MAX];
    char c;
    int status = 0, nstat = 0, pstat = 0;
    int totalLine;
    bool readStatus = true;
    file = fopen("user.txt", "r");
    printf("Log In\n\n");
    printf("Username: ");
    gets(uname);
    printf("Password: ");
    gets(pass);
    
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
    fseek(file, 0, SEEK_SET );
    

    for (i = 0; i < totalLine; i++)
    {
        fscanf(file, "%s", tmp);
        if (strcmp(uname, tmp) == 0)
        {
            nstat = 1;
            break;
        }
    }
    
    fseek(file, 0, SEEK_SET );
    for (i = 0; i < totalLine; i++)
    {
        fscanf(file, "%s", tmp);
        if (strcmp(pass, tmp) == 0)
        {
            pstat = 1;
            break;
        }
    }

    if (nstat == 1 && pstat == 1)
    {
        printf("Berhasil Masuk\n");
        sessionInfo();
        mainMenuUser(i);
    }else if (nstat == 1 && pstat == 0)
    {
        printf("Password anda salah, silahkan coba lagi.\n\nTekan enter untuk melanjutkan\n");
        getch();
        loginUser(i);
    }else if (nstat == 0 && pstat == 1)
    {
        printf("Username anda salah, silahkan coba lagi.\n\nTekan enter untuk melanjutkan\n");
        getch();
        loginUser(i);
    }else
    {
        printf("Akun tidak ada, silahkan daftar terlebih dahulu.\nTekan enter untuk melanjutkan\n");
        getch();
        daftarUser(i);
    }
    fflush(stdin);
    fclose(file);
}

void sessionInfo(){
    FILE *file;
    file = fopen("user.txt", "r");
    char uname[USERNAME_MAX];
    char pass[PASSWORD_MAX];

    fgets(uname, USERNAME_MAX, file);
    fgets(pass, USERNAME_MAX, file);

    fclose(file);

    file = fopen("session.txt", "w");
    fputs(uname, file);
    fputs(pass, file);
    fclose(file);
}

void mainMenuAdmin(int i){
    int pil;
    menu:
    system("cls");
    printf("Main Menu Admin\n\n");
    printf("1. Input data buku\n2. Cek data transaksi\n0. Exit\n\n");
    printf("Masukkan pilihan: ");
    scanf("%d", &pil);
    fflush(stdin);

    switch (pil)
    {
    case 1:
        system("cls");
        inputDataBuku(i);
        break;
    case 2:
        system("cls");
        cekDataTransaksi(i);
        break;
    case 0:
        printf("Anda telah keluar.");
        exit(0);
        break;
    default:
        printf("Pilihan tidak ada!\nTekan enter untuk kembali ke menu\n");
        getch();
        goto menu;
        break;
    }

}

void inputDataBuku(int i){
    system("cls");
    FILE *file;
    int n;
    buku *listBuku;
    
    printf("Masukkan jumlah buku: ");
    scanf("%d", &n);
    fflush(stdin);
    listBuku = malloc(sizeof(buku) * n);

    for (i = 0; i < n; i++)
    {
        printf("Judul buku: ");
        gets(listBuku[i].judulBuku);
        printf("Penulis: ");
        gets(listBuku[i].penulis);
        printf("Penerbit: ");
        gets(listBuku[i].publisher);
        printf("ISBN: ");
        scanf("%d", &listBuku[i].isbn);
        fflush(stdin);
        printf("Tahun terbit: ");
        scanf("%d", &listBuku[i].tahunTerbit);
        fflush(stdin);
        printf("Stok: ");
        scanf("%d", &listBuku[i].stok);
        fflush(stdin);
        printf("\n");
    }

    file = fopen("buku.txt", "w");
    for (i = 0; i < n; i++)
    {
        fprintf(file, "%s\n", listBuku[i].judulBuku);
        fprintf(file, "%s\n", listBuku[i].penulis);
        fprintf(file, "%s\n", listBuku[i].publisher);
        fprintf(file, "%d\n", listBuku[i].isbn);
        fprintf(file, "%d\n", listBuku[i].tahunTerbit);
        fprintf(file, "%d", listBuku[i].stok);
        if (i != n-1)
        {
            fprintf(file, "%s", "\n");
        }
    }
    
    fclose(file);
    mainMenuAdmin(i);        
}

void cekDataTransaksi(int i){
    FILE *file;
    char c;
    file = fopen("transaksi.txt", "r");

    do
    {
        c = fgetc(file);
        printf("%c", c);
    } while (c != EOF);
    
    fclose(file);
    mainMenuAdmin(i);
}

void mainMenuUser(int i){
    int pil;
    menu:
    system("cls");
    printf("Main Menu User\n\nWelcome!\n");
    printf("1. Lihat list buku\n2. Pinjam buku\n0. Exit\n\n");
    printf("Masukkan pilihan: ");
    scanf("%d", &pil);
    fflush(stdin);

    switch (pil)
    {
    case 1:
        lihatBuku(i);
        break;
    case 2:
        pinjamBuku(i);
        break;
    case 0:
        printf("Anda telah keluar.");
        exit(0);
        break;
    default:
        printf("Pilihan tidak ada!\nTekan enter untuk kembali ke menu\n");
        getch();
        goto menu;
        break;
    }
}

void lihatBuku(int i){
    system("cls");
    bool readStatus = true;
    char c, pil;
    int totalLine = 0, n;
    FILE *file;
    buku *listBuku;

    file = fopen("buku.txt", "r");

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

    
    n = totalLine/6;
    listBuku = malloc(sizeof(buku) * n);

    // printf("%d\n%d\n", totalLine, n);  
    
    fseek(file, 0, SEEK_SET);
    // fgets(listBuku[i].judulBuku, BUFFER_SIZE, file);
    for(i=0; i < n; i++){
        fgets(listBuku[i].judulBuku, BUFFER_SIZE, file);
        fgets(listBuku[i].penulis, BUFFER_SIZE, file);
        fgets(listBuku[i].publisher, BUFFER_SIZE, file);
        fscanf(file, "%d", &listBuku[i].isbn);
        fgetc(file);
        fscanf(file, "%d", &listBuku[i].tahunTerbit);
        fgetc(file);
        fscanf(file, "%d", &listBuku[i].stok);
        fgetc(file);
    }

    sortByName(i, n, listBuku);

    // printf("Judul Buku: %s\n", listBuku[i].judulBuku);
    for(i=0; i < n; i++){
        printf("Indeks buku: ", i+1);
        printf("Judul Buku: %s", listBuku[i].judulBuku);
        printf("Penulis: %s", listBuku[i].penulis);
        printf("Penerbit: %s", listBuku[i].publisher);
        printf("ISBN: %d\n", listBuku[i].isbn);
        printf("Tahun Terbit: %d\n", listBuku[i].tahunTerbit);
        printf("Stock Buku: %d\n\n", listBuku[i].stok);
    }

    fclose(file);

    printf("Apakah anda ingin melakukan peminjaman buku?(y/n): ");
    scanf("%c", &pil);
    if (c == 'Y' || c == 'y')
    {
        pinjamBuku(i);
    }else
    {
        mainMenuUser(i);
    }
    
}

void lihatBukuReadOnly(int i){
    system("cls");
    bool readStatus = true;
    char c;
    int totalLine = 0, n;
    FILE *file;
    buku *listBuku;

    file = fopen("buku.txt", "r");

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

    
    n = totalLine/6;
    listBuku = malloc(sizeof(buku) * n);

    // printf("%d\n%d\n", totalLine, n);  
    
    fseek(file, 0, SEEK_SET);
    // fgets(listBuku[i].judulBuku, BUFFER_SIZE, file);
    for(i=0; i < n; i++){
        fgets(listBuku[i].judulBuku, BUFFER_SIZE, file);
        fgets(listBuku[i].penulis, BUFFER_SIZE, file);
        fgets(listBuku[i].publisher, BUFFER_SIZE, file);
        fscanf(file, "%d", &listBuku[i].isbn);
        fgetc(file);
        fscanf(file, "%d", &listBuku[i].tahunTerbit);
        fgetc(file);
        fscanf(file, "%d", &listBuku[i].stok);
        fgetc(file);
    }

    sortByName(i, n, listBuku);

    // printf("Judul Buku: %s\n", listBuku[i].judulBuku);
    for(i=0; i < n; i++){
        printf("Indeks buku: %d\n", i+1);
        printf("Judul Buku: %s", listBuku[i].judulBuku);
        printf("Penulis: %s", listBuku[i].penulis);
        printf("Penerbit: %s", listBuku[i].publisher);
        printf("ISBN: %d\n", listBuku[i].isbn);
        printf("Tahun Terbit: %d\n", listBuku[i].tahunTerbit);
        printf("Stock Buku: %d\n\n", listBuku[i].stok);
    }

    fclose(file);
}

buku *sortByName(int i, int n, buku listBuku[]){
    int j, tmpint, tmpint1, tmpint2;
    char tmp[BUFFER_SIZE], tmp1[BUFFER_SIZE], tmp2[BUFFER_SIZE];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (strcmp(listBuku[j].judulBuku, listBuku[j+1].judulBuku)>0)
            {
                strcpy(tmp, listBuku[j].judulBuku);
                strcpy(listBuku[j].judulBuku, listBuku[j+1].judulBuku);
                strcpy(listBuku[j+1].judulBuku, tmp);

                strcpy(tmp1, listBuku[j].penulis);
                strcpy(listBuku[j].penulis, listBuku[j+1].penulis);
                strcpy(listBuku[j+1].penulis, tmp1);

                strcpy(tmp2, listBuku[j].publisher);
                strcpy(listBuku[j].publisher, listBuku[j+1].publisher);
                strcpy(listBuku[j+1].publisher, tmp2);

                tmpint = listBuku[j].isbn;
                listBuku[j].isbn = listBuku[j+1].isbn;
                listBuku[j+1].isbn = tmpint;

                tmpint1 = listBuku[j].tahunTerbit;
                listBuku[j].tahunTerbit = listBuku[j+1].tahunTerbit;
                listBuku[j+1].tahunTerbit = tmpint1;

                tmpint2 = listBuku[j].stok;
                listBuku[j].stok = listBuku[j+1].stok;
                listBuku[j+1].stok = tmpint2;
            }
        }
    }

    return listBuku;
}

void pinjamBuku(int i){
    FILE *file;
    lihatBukuReadOnly(i);
    int jumlah, n, lama, totalLine = 0;
    buku *listBuku;
    dtTransaksi *trs;
    trs = malloc(sizeof(dtTransaksi) * 1);
    bool readStatus = true;
    char name[USERNAME_MAX], c;
    SYSTEMTIME t;
    GetLocalTime(&t);
    file = fopen("buku.txt", "r");

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

    n = totalLine/6;
    listBuku = malloc(sizeof(buku) * n);

    
    fseek(file, 0, SEEK_SET);
    
    for(i=0; i < n; i++){
        fgets(listBuku[i].judulBuku, BUFFER_SIZE, file);
        fgets(listBuku[i].penulis, BUFFER_SIZE, file);
        fgets(listBuku[i].publisher, BUFFER_SIZE, file);
        fscanf(file, "%d", &listBuku[i].isbn);
        fgetc(file);
        fscanf(file, "%d", &listBuku[i].tahunTerbit);
        fgetc(file);
        fscanf(file, "%d", &listBuku[i].stok);
        fgetc(file);
    }

    sortByName(i, n, listBuku);

    fclose(file);
    
    printf("Jumlah Buku yang Akan dipinjam: ");
    scanf("%d", &jumlah);
    fflush(stdin);
    int pinjam[jumlah];
    
    pilihan:
    printf("Masukan urutan indeks buku yang akan dipinjam: \n");
    for(i=0; i<jumlah; i++){
        scanf("%d", &pinjam[i]);
        fflush(stdin);
    }
    
    i = 0;
    while (i<jumlah)
    {
        if (listBuku[pinjam[i]-1].stok == 0)
        {
            strcpy(name, listBuku[pinjam[i]-1].judulBuku);
            name[strcspn(name, "\n")] = 0;
            printf("Buku %s habis, silahkan pilih buku lain.\n", name);
            goto pilihan;
        }
        i++;
    }
    
    
    file = fopen("session.txt", "r");
    fseek(file, 0, SEEK_SET);
    fscanf(file, "%s", trs[0].namaPeminjam);
    fclose(file);
    trs[0].durasiPinjam = 7;
    
    printf("%s\n%d\n", trs[0].namaPeminjam, trs[0].durasiPinjam);
    file = fopen("transaksi.txt", "w");
    for (i = 0; i < jumlah; i++)
    {
        fprintf(file, "Nama Peminjam: %s\n", trs[0].namaPeminjam);
        fprintf(file, "Indeks Buku: %d\n", pinjam[i]);
        fprintf(file, "Judul Buku: %s", listBuku[pinjam[i]-1].judulBuku);
        fprintf(file, "Penulis: %s", listBuku[pinjam[i]-1].penulis);
        fprintf(file, "Publisher: %s", listBuku[pinjam[i]-1].publisher);
        fprintf(file, "ISBN: %d\n", listBuku[pinjam[i]-1].isbn);
        fprintf(file, "Tahun Terbit: %d\n", listBuku[pinjam[i]-1].tahunTerbit);
        fprintf(file, "Tanggal Peminjaman: %d-%d-%d\n", t.wDay, t.wMonth, t.wYear);
        fprintf(file, "Durasi Pinjam: %d hari\n", trs[0].durasiPinjam);
        
        if (i != n-1)
        {
            fprintf(file, "%s", "\n");
        }
    }
    fprintf(file, "Jika buku belum dikembalikan melewati durasi peminjaman maka peminjam akan dikenakan denda sebesar Rp. 2000,00.");
    fclose(file);
    mainMenuUser(i);
}