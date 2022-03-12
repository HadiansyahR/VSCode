#include <stdio.h>

int main(){
    int a=0,b=1,c=1,d=0;

    while(a<=3){ //outer loop
        if (a<1 & a%2==0){
            d = d+1;
        }

        while(b<=2){ //inner loop 1
            if (b%2==0){
                c = c+1;
            }else{
                c= c+2;
            }

            printf("%i, %i, %i, %i\n", a,b,c,d);
            b = b + 1;
            break;
        }
        
        if (b>2){      
            a = a +1;
        }
        if (a%2==0){
            d = d+1;
        }
            while (b>2 & a<=3){        
            if (b%2==0){
                    c = c+1;
                }else{
                    c= c+2;
                }

                printf("%i, %i, %i, %i\n", a,b,c,d);
                b = b + 1;
                break;
            }
        if (a>3)
        {
            break;
        }
    }  
return 0;   
}