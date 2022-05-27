#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "header.h"
#include <string.h>
#include "body.c"


int n,y;

int main(){
	barang headset[5];
		
	menu(headset);	
	printf("Masukan Pilihan : ");  scanf("%d",&n);
	switch (n){
	case 1:
			system("cls");
		brg (headset);
		belanja(headset);
		break;
	/*case 2:
		system("cls");
		keranjang();
		break;
	case 3:
		system("cls");
		kupon();
		break;
	case 4:
		system("cls");
		riwayat();
		break;
	}*/
}


	
	
	
return 0;	
}
