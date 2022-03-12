/**Faktorial**/

#include <stdio.h>
int main(){
    int x, i = 1, h = 1;
    scanf("%i", &x);

 //   while (h<=x)
 for (h =1; h<=x; h++) 
    {
        i = i * h;
    }
    printf("%i\n", i);
}