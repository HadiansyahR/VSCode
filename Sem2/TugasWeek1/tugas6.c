#include <stdio.h>

int main(){
    int i,n;
    printf("Latihan membuat array!\n");
    printf("Banyaknya mahasiswa : ");
    scanf("%d", &n);
    fgetc(stdin);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Masukkan nilai mahasiswa ke %d ", i+1);
        scanf("%d", &arr[i]);
        fgetc(stdin);
    }
    printf("======================================\n");
    for (i = 0; i < n; i++)
    {
        printf("Nilai mahasiswa ke %d adalah %d\n", i+1, arr[i]);
    }

    return 0;
}