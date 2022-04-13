#include <stdio.h>
    
// int main(){
//     int i;
//     char arr[16] = {"PEMROGRAMANDASAR"};
//     // int arr[7] = {1,3,5,7,9,11,13};
//     for (i = 0; i < 16; i++)
//     {
//         printf("%c ", arr[i]);
//     }
    
//     return 0;
// }

// #include <stdio.h>
    
// int main(){
//     int i, n, sum;

//     printf("Penjualan Barang!\n");
//     printf("=========================\n");
//     printf("Masukkan Jumlah Barang: ");
//     scanf("%d", &n);
//     printf("=========================\n");
//     int barang[n];

//     for (i = 0; i < n; i++)
//     {
//         printf("Input Harga Barang: ");
//         scanf("%d", &barang[i]);
//     }
//     printf("=========================\n");
//     for (i = 0; i < n; i++)
//     {
//         sum = sum + barang[i];
//         printf("Harga Barang: %d\n", barang[i]);
//     }
//     printf("=========================\n");
//     printf("Total: %d", sum);
    
//     return 0;
// }

// #include <stdio.h>
    
// int main(){
//     int i, j;
    
//     char negara[3][4][20] = {{"India","Indonesia","Malaysia","Singapura"},{"Filipina","Jepang","India","Brazil"},{"Palestina","Prancis","Amerika","Kanada"}};
//     for(i=0;i<3;i++){
//         for(j=0;j<4;j++){
//             printf("%s ", negara[i][j]);
//         }
//     printf("\n");
//     } 
    
//     return 0;
// }
// int array[4][4] = {{45,23,21,46},{67,34,56,77},{72,65,34,22},{21,43,67,78}};
//     for(i=0;i<4;i++){
//         for(j=0;j<4;j++){
//             printf("%d ", array[i][j]);
//         }
//     printf("\n");
//     }

// #include <stdio.h>
    
// int main(){
//     int i,j,k;
//     int array[2][2][2] = {{{1,5}, {9,13}}, {{3,7}, {0,15}}};

//     for (i = 0; i < 2; i++){
//         for (j = 0; j < 2; j++){
//             for (k = 0; k < 2; k++){
//                 printf("%d ", array[i][j][k]);
//             }
//             printf("\n");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }

// #include <stdio.h>
// int main(){
 
// int i, j;
// int matriks1[3][3] = {{24,21,28},{18,15,13},{16,18,17}};
// int matriks2[3][3] = {{11,13,15},{16,11,6},{11,12,11}};
// int matriks3[3][3] = {{7,5,4},{6,5,8},{7,9,10}};
  
//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             printf("%d ", (matriks1[i][j] - matriks2[i][j])+matriks3[i][j]);
//         } 
//         printf("\n");
//     }
 
//  return 0;
// }

// #include <stdio.h>
// int main(){
 
// int i, j, k;
// int matriks1[3][3] = {{12,11,13},{15,13,10},{14,16,15}};
// int matriks2[3][3] = {{21,22,12},{13,9,8},{7,15,13}};
// int hasil[3][3];

//     for(i=0; i<3; i++){
//         for(j=0; j<3; j++){
//             hasil[i][j] = 0;
//             for(k=0; k<3; k++){
//                 hasil[i][j] += matriks1[i][k]*matriks2[k][j];
//             }
//         }
//     }

//     for (i = 0; i < 3; i++){
//         for (j = 0; j < 3; j++){
//             printf("%d ", hasil[i][j]);
//         }
//         printf("\n");
//     }
 
//  return 0;
// }

// #include <stdio.h>

// typedef struct data
// {
//     int kode, harga, jumlah;
//     char tanggal[11];
// }laundry;

// void output(laundry ln);

// int main(){
//     laundry ln;
//     printf("Masukkan Kode: ");
//     scanf("%d", &ln.kode);
//     fgetc(stdin);
//     printf("Masukkan Tanggal: ");
//     gets(ln.tanggal);
    
//     printf("Masukkan Harga: ");
//     scanf("%d", &ln.harga);
//     fgetc(stdin);
//     printf("Masukkan Jumlah: ");
//     scanf("%d", &ln.jumlah);
//     fgetc(stdin);

//     output(ln);

//     return 0;
// }

// void output(laundry ln){
//     printf("\nKode: %d\nTanggal: %s\nHarga: %d\nJumlah: %d\n", ln.kode, ln.tanggal, ln.harga, ln.jumlah);
// }

#include <stdio.h>

int ganjil(int i){
    if (i%2 != 0 && i<=15)
    {
        printf("%d ", i);
    }
    
    return ganjil(i+1);
}
int main(){
    int i = 0;
    
    ganjil(i);
    return 0;
}