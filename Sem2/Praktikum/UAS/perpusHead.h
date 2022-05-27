#ifndef perpusHead
#define perpusHead
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
void cariBuku(int i);

buku *sortByName(int i, int n, buku listBuku[]);
#endif