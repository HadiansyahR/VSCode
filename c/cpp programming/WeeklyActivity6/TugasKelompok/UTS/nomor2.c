#include <stdio.h>

int main(){
    int pilih,ongkos,harga,input,total,totalHarga;
    float berat; 

    scanf("%d", &pilih);
    scanf("%d", &input);
    switch(pilih)
    {
        case 1:
            harga = 21500;
            berat = 0.9;
            //berat = berat*input;
            break;
        case 2:
            harga = 17000;
            berat = 1.3;
            //berat = berat*input;
            break;
        case 3:
            harga = 12500;
            berat = 0.4;
            //berat = berat*input;
            break;
        case 4:
            harga = 15500;
            berat = 1.2;
            //berat = berat*input;
            break;
        case 5:
            harga = 14000;
            berat = 0.7;
            //berat = berat*input;
            break;
        default:
            printf("masukan nomor produk dengan benar\n");
            break;
    }
    berat = berat * input;
    if(berat > 5)
            {
                ongkos = 9000*berat;
            }
            else
            {
                ongkos = berat*12000;
            }
            
            totalHarga = harga*input;
            total = totalHarga+ongkos;

        printf("Total harga: Rp. %d \n",totalHarga);
        printf("Berat: %2.1f kg \n",berat);
        printf("Biaya Kirim: Rp. %d \n",ongkos);
        printf("Total Bayar: Rp. %d",total);
}