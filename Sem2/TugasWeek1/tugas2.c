#include <stdio.h>

int main(){
    int perkuliahan,UTS,UAS,nilai;
    printf("Program Kelulusan\n");
    printf("Perkuliahan: ");
    scanf("%d", &perkuliahan);
    printf("UTS: ");
    scanf("%d", &UTS);
    printf("UAS: ");
    scanf("%d", &UAS);

    nilai = (perkuliahan*0.7)+(UTS*0.1)+(UAS*0.2);

    printf("Nilai akhir: %d\n", nilai);
    return 0;
}