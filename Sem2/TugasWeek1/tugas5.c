#include <stdio.h>

int main(){
    int i, total=0;
    int a[12] = {8,7,6,5,4,2,3,4,5,6,7,8};

    for (i = 0; i < 12; i++)
    {
        printf("Indeks ke - %d : %d\n", i,a[i]);
        total = total + a[i];
    }

    printf("Total dari nilai adalah %d\n", total);
    return 0;
}

// #include <stdio.h>

// int main(){
//     return 0;
// }