/*
Program  : Menu Pesanan
NRP-Nama : 162021041 - Najwa Adinda
Tanggal  : 21-Maret-2022
*/

#include <stdio.h>
#include <string.h>

struct menupilihan{
    int rasa;
    int topping;
    char nama[20];
}menu;

void menurasa(char rs);
void menutopping(char tp);
void menunama();

int main(){

    struct menu;
    char rs, tp, nm;
    printf("Masukan Nama : ");
    scanf("%s", &menu.nama);
    printf("Masukkan Pilihan Rasa:\n");
    printf("1.Kari Ayam\n2.Soto\n3.Rendang\n4.Ayam Bawang\n");
    printf("Masukkan Pilihan Anda : ");
    scanf("%d", &menu.rasa);

    printf("\n");

    printf("Masukkan Pilihan Topping :\n");
    printf("1.Rumput Laut\n2.Telur\n3.Sayuran\n4.Daging\n");
    printf("Masukkan Pilihan Anda : ");
    scanf("%d", &menu.topping);

    printf("\nPesanan atas nama : ");
    menunama();
    printf("\nMemesan :");
    menurasa(rs);
    printf(" dengan topping ");
    menutopping(tp);

   return 0;
}

void menunama(){
    struct menu;
    printf("%s", menu.nama);    
}

void menurasa(char rs){

    struct menu;

    switch (menu.rasa){
    case 1:
    printf("Kari Ayam");
    break;
    case 2:
    printf("Soto");
    break;
    case 3:
    printf("Rendang");
    break;
    case 4:
    printf("Ayam bawang");
    break;
    default:
    printf("Topping tidak tersedia");
    break;
    }
}

void menutopping(char tp){

    struct menu;

    switch(menu.topping){
    case 1:
    printf("Rumput laut");
    break;
    case 2:
    printf("Telur");
    break;
    case 3:
    printf("Sayuran");
    break;
    case 4:
    printf("Daging");
    break;
    default:
    printf("Pilihan rasa yang tidak tersedia");
    }
}