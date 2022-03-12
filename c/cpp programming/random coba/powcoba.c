#include <stdio.h>
#include <math.h>

int main(){
    double base = 2, power = 1, result = 1;

    //result = result + (pow(base, power)/power + 1);
    result = result + (pow(base, power)/(power+1));
    printf ("%f", result);
    return 0;
}