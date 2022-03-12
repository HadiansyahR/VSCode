#include <stdio.h>

int konversi(int jam, int men, int det);

int main(){
    int jam, men, det;

    printf("Masukkan nilai jam, menit, dan detik secara berurutan: \n");
    scanf("%d\n%d\n%d", &jam, &men, &det);
    printf("Jumlah detik setelah konversi: %d", konversi(jam, men, det));

return 0;
}

int konversi(int jam, int men, int det){
    int kjam = jam * 3600;
    int kmen = men * 60;
    int jumDet = kjam + kmen + det;

    return jumDet;
}