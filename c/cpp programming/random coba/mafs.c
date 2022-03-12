#include <stdio.h>
#include <math.h>

// int main(){
//     float a = 4.32;
//     int integer = 1234567;
//     a = a*100;
//     float hasil = (int)a%2;

//     printf("%4d %d\n", integer, (int)hasil);
//     printf("%f", hasil);
// }
int main(){
    int a = 5, b=15, c=123;

//%2d = there will be 2 space allocated to print a variabel
//example= instead of printing [5], line 18 will print [ 5] 
//so there is an extra space in front of variabel a value
    printf("%13d", a);
    printf("%7d", b);
    printf("%6d", c);
}