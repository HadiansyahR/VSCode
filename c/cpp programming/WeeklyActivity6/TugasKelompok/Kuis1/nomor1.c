#include <stdio.h>
int main(){
    int a=2, b, c=1, d=3;
    while (a<3)
    {
        b = 0;
        if (b%2==1)
        {
            d=d+1;
        }
        b = b+2;
        a = a+1;
        d = d+b-1;
        
        if (b%2==0)
        {
            c = c+1;
        }
        printf("%d, %d, %d, %d\n",a,b,c,d);

        while (b<=5)
        {
            b = b+2;
            a = a+1;
            d = d+b-1;
        
            if (b%2==0)
            {
                c = c+1;
            }
            printf("%d, %d, %d, %d\n",a,b,c,d);
        }
    if (b>5)
    {
        a = a+1;
    }   
  }
return 0;
}