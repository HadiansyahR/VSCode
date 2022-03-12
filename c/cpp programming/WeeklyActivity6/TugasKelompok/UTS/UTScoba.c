#include <stdio.h>
/*
0100
0104
0204
0224=
0222
0322
0342=
0340
1340
1344

*/
int main(){
    int a=0, b=1, c=0, d=0;
    do
    {        
        if (a%2==1)
        {
            c=c+1;
        }

        d = 4;

        while (d>0)
        {
            if (c%2==0)
            {
                b = b + 1;
            }else
            {
                b = b + 3;
            }
            
            c = c + 2;
            printf("%d, %d, %d, %d\n", a,b,c,d);
            d = d - 2;
        }
        a = a + 1;

    } while (a<4);
return 0;
}