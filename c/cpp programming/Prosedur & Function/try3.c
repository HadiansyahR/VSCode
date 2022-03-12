#include <stdio.h>
void bc();
int a,b,c,d,e,f;
int main(){
    a = 1;
    b = 3;
    c = 2;
    d = 4;
    e = 5;

    for (f = 1; f <= 3; f++)
    {
        b = b + f + 2;
        c = c + f + 4;
        bc(e,f);
        printf("\nG2: %d, %d, %d, %d, %d", a,b,c,d,e);
    }

return 0;    
}

void bc(int c, int d){
    a = a + 2;
    b = b + 4;
    c = c + 3;
    e = d + 1;
    printf("\nbc: %d, %d, %d, %d, %d", a,b,c,d,e);
}