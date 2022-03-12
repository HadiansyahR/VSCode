#include <stdio.h>
#include <string.h>
int main(){
    int menit, total_parkir;
    char kendaraan[50];

    printf("1. Motor\t2. Mobil\n");
    printf("Masukkan jenis kendaraan: \n");
    scanf("%s", kendaraan);

    //Motor
    if (strcmp(kendaraan, "Motor") == 0)
    {  
        printf("Masukkan total waktu parkir(menit):\n");
        scanf("%d", &menit);

        if (menit<=15)
        {
            total_parkir = 0;
            
        }
        else if (menit<=60)
        {
            total_parkir = 1500;
            
        }
        else if(menit > 120)
        {
            total_parkir = 4500;
            
        }
        else
        {
            total_parkir = 3000;
            
        }
    }
    //Mobil
    else
    {
        printf("Masukkan total waktu parkir(menit):\n");
        scanf("%d", &menit);

        if (menit<=15)
        {
            total_parkir = 0;
            
        }
        if (menit<=60)
        {
            total_parkir = 3500;
      
        }
        else if(menit > 120)
        {
            total_parkir = 10000;
              
        }
        else
        {
            total_parkir = 7000;
              
        }     
    }
    printf("Biaya parkir: Rp. %d,-", total_parkir);   
    return 0;
}