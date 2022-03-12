#include <stdio.h>
int main(){
    int a=0,b=1,c=1,d=0;

    while (a<=3)
    {
        if (a%2==0)
        {
            d=d+1;
        }        
        if (b%2==0)
        {
            c=c+1;
        }else
        {
            c=c+2;
        }
        printf("%i, %i, %i, %i\n",a,b,c,d);
        b=b+1;

    while (b<=2)
    {
        if (b%2==0)
        {
            c=c+1;
        }else
        {
            c=c+2;
        }
        printf("%i, %i, %i, %i\n",a,b,c,d);
        b=b+1;
    }

    if (b>2)
    {
        a++;
    }    
  }   
}