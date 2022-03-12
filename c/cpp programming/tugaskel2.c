#include <stdio.h>

int main(){
    int menit, total_waktu, total_parkir;

    printf("Masukkan menit\n");
    scanf("%d", &menit);

    if (menit<=15)
    {
        total_parkir = 0;
        printf("%d", total_parkir);
    }
    else if(menit > 15 && menit<180)
    {
        if (menit<60)
        {
            total_parkir = 1500;
            printf ("%d", total_parkir);
        }
        else if(menit == 120)
        {
            total_parkir = 3000;
            printf("%d", total_parkir);
        }
        else
        {
            total_waktu = menit/60;
            total_parkir = total_waktu*1500+1500;
            printf("%d", total_parkir);
        }     
    }else{
        total_parkir = 4500;
        printf("%d", total_parkir);
    }
    return 0;
}