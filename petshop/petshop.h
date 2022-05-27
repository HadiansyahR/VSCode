#ifndef petshop_H
#define petshop_H

typedef struct
{
  int kode, harga, jumlah, stok, waktu;
  char deskripsi[50];
  char jenis_hewan[20];
  char nama[20];
} petshop;

void perawatan();
void belanja(petshop barang[5]);
void penitipan();

petshop DaftarBarang();
petshop DaftarPaket();

void perawatan();
void penitipan();
void menu();

#endif // petshop_H
