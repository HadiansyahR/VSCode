#include <stdio.h>

int main(){

    int i,low,high,ketemu,n,key,mid;

    int sepatu[]={37,38,39,41,42,43,44}; 

    n = sizeof(sepatu)/sizeof(int);

    low = 0; high = n; ketemu = -1;

    key = 43;

    while (low <= high) {
        mid=(low+high)/2;
        if(key == sepatu[mid]){
                ketemu = mid;
                break;
            }else if(key < sepatu[mid]){
                high = mid-1;
            }else{
                low = mid+1;
            }
    }
    if (ketemu == -1) {
        printf("Tidak ditemukan");
    }else{
        printf("Sepatu ukuran 43 ditemukan di indeks ke-%d\n",ketemu+1);
    }
  return 0;
}