/* NRP: 162021023
   Nama: Muhammad Hadiansyah Rabbani
Score: 5
*/ 

#include <stdio.h>

int main(){

/* Deklarasi di sini (Score: 5) */ 
int i,n,mid,jumL=0,jumR=0;
scanf("%d", &n);
int array[n];
/* Algoritma di sini (Score: 90) */
if(n%2 != 0){
        printf("NOT VALID");
    }else{
        for(i=0;i<n;i++){
        printf("Masukkan elemen array: ");
        scanf("%d", &array[i]);
        }
        
        mid = n/2;
        for(i=0;i<mid;i++){
            jumR = jumR + array[i];
        }
        
        for(i=0;i<mid;i++){
            jumL = jumL + array[mid+i];
        }
        
        printf("%d", jumR);
        printf("%d", jumL);
        
        if(jumR == jumL){
            printf("\nBRAVO");
        }else{
            printf("\nFAIL");
        }
    }
    
    return 0;
}