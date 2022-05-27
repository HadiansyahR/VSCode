#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"

void menu(barang headset[]){
	printf(" ================================\n");
	printf(" =       Manajemen TOKO         =\n");
	printf(" ================================\n");
	printf(" =    1. Input Data             =\n");
	printf(" =    2. Menampilkan Data       =\n");
	printf(" =    3. Menghapus Data         =\n");
	printf(" =    4. Exit                   =\n");
	printf(" ================================\n");
	
}


void brg(barang headset[])
{
	int i;
    headset[0].id = 23;
    strcpy(headset[0].nama, "Steel Series - Artics 3");
    headset[0].harga = 980000;
    headset[0].stok = 15;

    headset[1].id = 23;
    strcpy(headset[1].nama, "Steel Series - Artics 5");
    headset[1].harga = 1500000;
    headset[1].stok = 16;
    
    headset[2].id = 23;
    strcpy(headset[2].nama, "Steel Series - Artics 7");
    headset[2].harga = 2600000;
    headset[2].stok = 18;
    
    headset[3].id = 23;
    strcpy(headset[3].nama, "Logitech G733\t");
    headset[3].harga = 1799000;
    headset[3].stok = 12;
    
    headset[4].id = 23;
    strcpy(headset[4].nama, "Logitech Pro X\t");
    headset[4].harga = 1699000;
    headset[4].stok = 14;
    
    headset[5].id = 23;
    strcpy(headset[5].nama, "Razer BlackShark V2 Pro");
    headset[5].harga = 2999000;
    headset[5].stok = 10;
    
}

void judul(){
	printf(" ================================================================================\n");
		printf(" =                              OLSHOP ELEKTRONIK                               =\n");
		printf(" =                     TOKO ELEKTRONIK TERMURAH & TERJAMIN                      =\n");
		printf(" ================================================================================\n");
		printf(" = \tNama Produk\t\t\t| Stock |\t\tHarga\t\t=\n");
		printf(" ================================================================================\n");
}



void belanja(barang headset[]){
	int i,nn;
	barang toko;
	judul();
	for( i=0;i < 5;i++){
				printf("= %s\t\t|   %d   |\t\tRp.%d\t=\n ",headset[i].nama,headset[i].stok,headset[i].harga);
			}
				printf(" ================================================================================\n");
			
			}
