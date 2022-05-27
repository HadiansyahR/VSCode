#include "petshop.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

petshop DaftarBarang()
{
    petshop barang[5];

    barang[0].kode = 001;
    barang[0].harga = 22000;
    barang[0].stok = 5;
    strcpy(barang[0].nama, "Whiskas");
    strcpy(barang[0].jenis_hewan, "Kucing");
    strcpy(barang[0].deskripsi, "Sangat cocok untuk pertumbuhan kucing");

    barang[1].kode = 002;
    barang[1].harga = 22000;
    barang[1].stok = 22;
    strcpy(barang[1].nama, "Kalung");
    strcpy(barang[1].jenis_hewan, "Anjing");
    strcpy(barang[1].deskripsi, "Sangat cocok untuk kecantikan anjing");

    barang[2].kode = 003;
    barang[2].harga = 22000;
    barang[2].stok = 52;
    strcpy(barang[2].nama, "Baju");
    strcpy(barang[2].jenis_hewan, "Kucing");
    strcpy(barang[2].deskripsi, "Sangat cocok untuk kecantikan kucing");

    barang[3].kode = 004;
    barang[3].harga = 22000;
    barang[3].stok = 15;
    strcpy(barang[3].nama, "Kaos");
    strcpy(barang[3].jenis_hewan, "Anjing");
    strcpy(barang[3].deskripsi, "Sangat cocok untuk kecantikan anjing");

    barang[4].kode = 005;
    barang[4].harga = 40000;
    barang[4].stok = 10;
    strcpy(barang[4].nama, "Royal class");
    strcpy(barang[4].jenis_hewan, "Kucing");
    strcpy(barang[4].deskripsi, "Sangat cocok untuk pertumbuhan kucing");
}

petshop DaftarPaket()
{
    petshop paket[5];

    paket[0].kode = 101;
    paket[0].harga = 50000;
    paket[0].waktu = 30;
    strcpy(paket[0].nama, "Paket Standar");
    strcpy(paket[0].jenis_hewan, "Kucing");
    strcpy(paket[0].deskripsi, "Merawat kuku, bulu, dan gigi kucing lengkap");

    paket[1].kode = 102;
    paket[1].harga = 60000;
    paket[1].waktu = 120;
    strcpy(paket[1].nama, "Paket Silver");
    strcpy(paket[1].jenis_hewan, "Anjing");
    strcpy(paket[1].deskripsi, "Merawat kuku, bulu, dan gigi anjing lengkap");

    paket[2].kode = 103;
    paket[2].harga = 80000;
    paket[2].waktu = 50;
    strcpy(paket[2].nama, "Paket Gold");
    strcpy(paket[2].jenis_hewan, "Kucing");
    strcpy(paket[2].deskripsi, "Merawat kuku, bulu, dan gigi kucing lengkap");

    paket[3].kode = 104;
    paket[3].harga = 35000;
    paket[3].waktu = 30;
    strcpy(paket[3].nama, "Paket Platinum");
    strcpy(paket[3].jenis_hewan, "Anjing");
    strcpy(paket[3].deskripsi, "Merawat kuku, bulu, dan gigi anjing lengkap");

    paket[4].kode = 105;
    paket[4].harga = 120000;
    paket[4].waktu = 60;
    strcpy(paket[4].nama, "Paket Super");
    strcpy(paket[4].jenis_hewan, "Kucing");
    strcpy(paket[4].deskripsi, "Merawat kuku, bulu, dan gigi kucing lengkap");
}

// belanja
void belanja(petshop barang[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", barang[i].harga);
    }
}
// perawatan
void perawatan()
{
    printf("Mau perawatan apa?");
}

// penitipan
void penitipan()
{
    printf("Mau nitip apa?");
}

// menu
void menu()
{
    petshop ps[5];
    int pil;
menu:
    // system("cls");
    printf("===============================\n");
    printf("    MENU PETSHOP KELOMPOK D\n");
    printf("===============================\n");
    printf("1. Belanja Barang\n2. Jasa Perawatan\n3. Jasa Penitipan\n4. Keluar\n");
    printf("===============================\n");

    printf("Masukkan pilihan: ");
    scanf("%d", &pil);
    fgetc(stdin);
    switch (pil)
    {
    case 1:
        system("cls");
        belanja(ps);
        break;
    case 2:
        system("cls");
        perawatan();
        break;
    case 3:
        system("cls");
        penitipan();
        break;
    case 4:
        printf("Anda telah berhasil keluar!\n");
        break;
    default:
        printf("Pilihan Anda tidak tersedia, silahkan coba lagi!\n");
        goto menu;
        break;
    }
}
