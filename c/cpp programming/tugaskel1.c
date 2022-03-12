#include <stdio.h>
#include <string.h>
int main()
{
    char kota[20];
    
    printf("Masukkan nama kota\n");
    scanf("%s", kota);
    
    if(strcmp(kota, "Bandung")==0){
        printf("\nUdara sejuk");
    }
    else if(strcmp(kota, "Bekasi")==0){
        printf("\nUdara panas");
    }else{
        printf("\nUdara kering");
    }

    if(strcmp(kota, "Surabaya")==0){
       printf("\nPanas tapi sejuk"); 
    }
    return 0;
}