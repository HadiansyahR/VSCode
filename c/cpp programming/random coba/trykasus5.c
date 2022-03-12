#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
    int i, n, result;
    double arr[5] = {3.32, 2.45, 4.21, 5.43, 6.27};
    double x;
    char conv[4];

scanf("%d", &n);
for (i = 0; i < n; i++)
{
    x = arr[i];
    printf("x = %f\n", x);
    
    gcvt(x, 3, conv);
    printf("conv = %s\n", conv);

    result = (int)(x*100);
    printf("result = %d\n", result);
    
    if (result%2!=0)
    {
        printf("%c%c\n", conv[2],conv[3]);//2
    }
}
    return 0;
}

//
    //printf("%s\n", conv);//3.32
    // printf("%s\n", conv);//3.32
    // printf("%c\n", conv[3]);//2
    //printf("%d\n", y);//50
    //yconv = (int) y;
    //printf("%d\n", yconv);
    // result = y/2;
    // printf("%c %d", conv[3], result);
    // 