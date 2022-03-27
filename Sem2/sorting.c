#include <stdio.h>
int i;
int sorting(int *a);
int main(){
    int a[5] = {5,1,3,2,4};
    int tmp;

    for (i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
    
    sorting(&a);
    
    for (i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
    
    return 0;
}

int sorting(int *a){
    int tmp;
    for (i = 0; i < 5; i++)
    {
        if (a[i]>a[i+1]){
            a[i] = tmp;
            tmp = a[i+1];
            a[i+1] = a[i];
        }   
    }
    
    
    return *a;
}