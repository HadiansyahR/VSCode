#include <stdio.h>

int main(){
    int arr[3] = {1,2,3};
    int jumlah;
    
    jumlah = arr[1]+arr[2];

    for (int i = 0; i < 3; i++)
    {
        printf("%d", arr[i]);
    }
    
    printf("\n%d", jumlah);
    return 0;
}