#include <stdio.h>
int main(){
    int a,b,c,d,i;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    for (i = 0; a > i; a--)
    {
        if (a%2!=0)
        {
            printf("%d ", a);
        } 
    }

    printf("\n");

    for (i = 1; i <= b; i++)
    {
        if (i%2!=0 && i%3==0)
        {
            printf("%d ", i);
        } 
    }

    printf("\n");

    d = c/2;
    for (i = c/2; c > i; c--)
    {
        printf("%d ", c);
    }

    for (i = 1; i <= d; i++)
    {
        printf("%d ", i);
    }

return 0;  
}