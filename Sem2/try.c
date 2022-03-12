#include <stdio.h>
void pntr(float *IP);
void pntr(float *IP){
    float a = 2.1;
    float b = 6;
    
    *IP = b / a;
}

void baru(float IP);
void baru(float IP){
    int sks;
    printf("%.1f", IP);
    if(IP > 3.0){
        sks = 24;
    }else if(IP > 2.0 & IP <= 3.0){
        sks = 20;
    }else{
        sks = 18;
    }
    
    printf("\n%d", sks);
    printf("\n%d", IP > 2.0 & IP <= 3.0);
}

int main()
{
    float IP;
    pntr(&IP);
    
    baru(IP);
    return 0;
}