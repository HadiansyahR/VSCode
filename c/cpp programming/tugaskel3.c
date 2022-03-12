#include <stdio.h>

int main(){
    int num1, num2, tambah, kurang, bagi, kali, pilih;
    printf("Masukkan angka 1: \n");
    scanf("%i", &num1);
    printf("Masukkan angka 2: \n");
    scanf("%i", &num2);
    scanf("%i", &pilih);

    switch (pilih)
    {
    case 1:
      tambah = num1 + num2;
      printf("%i", tambah);
      break;
    case 2:
      kurang = num1 - num2;
      printf("%i", kurang);
      break;
    case 3:
      kali = num1 * num2;
      printf("%i", kali);
      break;
    case 4:
      bagi = num1 / num2;
      printf("%i", bagi);
      break;
    default:
      printf("Masukan salah\n");
    }
return 0;
}