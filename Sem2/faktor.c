#include <stdio.h>
int i;
int faktorial(int x);
int main(){
    i = 1;
    faktorial(i);
    return 0;
}
 
int faktorial(int x){
    if (x < 8)
    {
        if (x%2==0)
        {
            printf("%d\n", x);
        }
        return faktorial(x+1);
    }
}
