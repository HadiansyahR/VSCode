#include <stdio.h>
void proc(int *a, int *b);

int main(){
    int x,y;

    scanf("%d", &x);
    scanf("%d", &y);

    printf("Before: %d %d\n", x,y);
    proc(&x,&y);
    printf("After: %d %d\n", x,y);

    return 0;
}

void proc(int *a, int *b){
    int hasil;
    hasil = *a * *b;
    printf("%d", hasil);
}