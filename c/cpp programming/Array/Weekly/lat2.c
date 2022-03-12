#include <stdio.h>
int main(){
int tom[3];
int jerry[3];
int skorT, skorJ, i;

for (int i = 0; i < 3; i++)
{
    printf("Masukkan elemen %d Tom: ", i+1);
    scanf("%d", &tom[i]);
}

for (int i = 0; i < 3; i++)
{
    printf("Masukkan indeks %d Jerry: ", i+1);
    scanf("%d", &jerry[i]);
}

for (int i = 0; i < 3; i++)
{
    if (tom[i] > jerry[i])
    {
        skorT+=1;
    }
    else if(jerry[i]>tom[i])
    {
        skorJ+=1;
    } 
}
printf("\n");
printf("Skor Tom: %d\t", skorT);
printf("Skor Jerry: %d", skorJ);

    return 0;
}