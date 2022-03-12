/**Faktorial**/

#include <stdio.h>
int main(){
    int x, hasil = 1, counter;
    scanf("%i", &x);

 //   while (h<=x)
 for (counter = 1; counter<=x; counter++) 
    {
        hasil = hasil * counter;
    }
    printf("%i\n", hasil);
}