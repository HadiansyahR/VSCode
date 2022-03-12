#include <stdio.h>

int main(){
    int a,b,res;
    scanf("%d",&a);
    scanf("%d",&b);
    res = a < b;
    printf("%s", res ? "true":"false");
    return 0;
}