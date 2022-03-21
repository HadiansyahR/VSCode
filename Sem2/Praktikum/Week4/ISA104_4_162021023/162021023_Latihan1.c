/*
Program  : Mencetak info data tanggal
NRP-Nama : 162021023 - Muhammad Hadiansyah Rabbani
Tanggal  : 17-03-2022
Praktikum: [4]-[Fungsi & Prosedur]
*/

#include "stdio.h"
#include "conio.h"
#include "windows.h"

struct data_tanggal{
    int tanggal;
    int bulan;
    int tahun;
}unit_tgl;

void cetak_info_tanggal(struct data_tanggal unit_tgl);

void main(){
    system("cls");
    struct data_tanggal saat_proses = {12, 2, 1989};

    cetak_info_tanggal(saat_proses);
    getch();
}

void cetak_info_tanggal(struct data_tanggal unit_tgl){
    static char *nama_bulan[] = {
        "Kode bulan salah!", 
        "Januari", "Februari", "Maret", "April", "Mei",
        "Juni", "Juli", "Agustus", "September", "Oktober",
        "November", "Desember"};
    printf("%d %s %d\n", unit_tgl.tanggal, nama_bulan[unit_tgl.bulan], unit_tgl.tahun);
}