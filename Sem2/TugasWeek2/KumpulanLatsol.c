/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    // int i, r=0, t=0;
    // int a[10];
    
    // printf("Tugas 3!\n");
    // for(i = 0;i<10;i++){
    //     printf("Masukkan indeks ke - %d: ", i);
    //     scanf("%d", &a[i]);
    // }
    // printf("\n");
    // for(i = 0;i<10;i++){
    //     t = t + a[i];
    //     printf("Array indeks ke - %d: %d\n", i, a[i]);
    // }
    // r = t/10;
    // printf("Total: %d\n", t);
    // printf("Rata-rata: %d", r);
    
    //Pause
    
    // int arr[2][5];
    // int i, n;
    
    // srand(time(NULL));
    
    // for(i = 0;i<2;i++){
    //     for(n=0;n<5;n++){
    //         arr[i][n]=rand()%10;
    //     }
    // }
    
    // for(i=0;i<2;i++){
    //     for(n=0;n<5;n++){
    //         printf("%d ",arr[i][n]);
    //     }
    //     printf("\n");
    // }
    
    //pause
    
    /**int i,j;
    int arr[4][4] = {{45,23,21,26},{67,34,56,77},{72,65,34,22},{21,43,67,78}};
    printf("===========");
    for(i = 0;i<4;i++){
        
        for(j=0;j<4;j++){
            printf("%d ",arr[i][j]);
            if(j=4){
                printf("|");
            }
        }
        printf("\n");
    }
    printf("===========");
    **/
    
    //Pause
    
    /**
    int i,j,k;
    char warna[4][4][10] = {{"Hijau", "Kuning", "Biru", "Merah"},{"Pink", "Orange", "Biru", "Merah"}};
    
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%s ", warna[i][j]);
        }
        printf("\n");
    }
    **/
    
    //pause
    
    /**
    int i,j;
    int arr[2][2];
    
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Input indeks ke[%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Hasil indeks [%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }
    printf("\n");
    printf("Tabel:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    **/
    
    int i,j,k;
    int arr[4][3][5];
    srand(time(NULL));
    
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            for(k=0;k<5;k++){
                arr[i][j][k] = rand()%10;
            }
        }
    }
    
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("");
            for(k=0;k<5;k++){
                printf("Array[%d][%d][%d] = %d\n",i,j,k,arr[i][j][k]);
            }
        }
    }
    return 0;
}
