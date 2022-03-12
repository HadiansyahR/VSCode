#include <stdio.h>
int main(){
    int i=1,a,total=0;
    while (i<=10)
    {
        a = i*i;
        printf("%d\n", a);
        total=total+a+2;
        i++;
    }
    printf("\nTotal is %d", total);
    
return 0;
}