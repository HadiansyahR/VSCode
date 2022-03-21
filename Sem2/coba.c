#include <stdio.h>
struct lingk
{
    float r;
};

typedef struct
{
    struct lingk round;
}bdt;

bdt input();
bdt input(){
    bdt datar;
    scanf("%f", &datar.round.r);

    return datar;
}

float luas(bdt lin);
float luas(bdt lin){
    return 3.14*(lin.round.r*lin.round.r);
}
void main(){
    bdt bdt1;
    bdt1 = input();
    
    printf("%.2f",luas(bdt1));
}