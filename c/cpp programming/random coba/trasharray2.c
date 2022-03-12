#include <stdio.h>
#include <math.h>

void even_odd(float arr[], int n);
void even_odd(float arr[], int n){
    for (int i = 0; i < n; i++)
    {
        if (fmod(arr[i]*100, 2.0)==0)
        {
            printf("%.2f\n", arr[i]);
        }
    }
}
int main(){
    int n, i;

    printf("Masukkan jumlah indeks: ");
    scanf("%d", &n);

    float array[n];
    for (i = 0; i < n; i++)
    {
        printf("Masukkan elemen ke-%d array: ", i);
        scanf("%f", &array[i]);
    }

    even_odd(array, n);

return 0;   
}