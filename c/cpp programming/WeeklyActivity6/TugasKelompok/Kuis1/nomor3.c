#include <stdio.h>

int main(){
    int counter = 0, a, hasil = 0;
    scanf("%d", &a);
    while (counter<=a)
    {
        if (counter%2!=0)
        {
            hasil = hasil + counter;
            printf("%d ", counter);
        }
        counter = counter+3;
    }
    printf("\n%d", hasil);
    return 0;
}