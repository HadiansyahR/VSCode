#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(){
    int a,b,c;
    double d,e,f,intpart;
    char g;
    bool h;
    const int i = 100;

    a=3;
    b=2;
    e=12.5;
    e=a+2*3-b;
    f=i/5;

    printf("Masukkan char g: \n");
    scanf("%c", &g);

    d=e+b;
    c=a*b/2;
    f=f+d+c;
    h=(g=='k') && (f = modf(f, &intpart)==1);

    printf("%d %d %d %d %d %d", &a,&b,&c,&d,&e,&f);
    return 0;
}