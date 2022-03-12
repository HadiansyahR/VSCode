#include "head.h"
#include "body.c"

#include <stdio.h>
    
int main(void){
    int i, n;
    n = inputjml();

    nilaimhs nmhs[n];
    inputdata(nmhs, n);
    tampil(nmhs, n);
    mean(nmhs, n);
    
    return 0;
}