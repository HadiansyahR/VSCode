#include <stdio.h>
#include <string.h>

int main(){
    int i,n,len;
    char b[20];
    char a[20];

    strcpy(b, "22-07-2021");
    
    len = strlen(b);
    for (i = 0; i < len; i++)
    {
        a[i] = b[6+i];
        printf("%s",a);     
    }
    
    
    // a[0] = b[0];
    // a[1] = b[4];
    // a[2] = b[2];

    printf("%s", a);
    return 0;
}