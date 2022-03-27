    #include <stdio.h>
    #define phi 3.14
    typedef struct
    {
        int p, l, r;
    }bdatar;
    int luasP(bdatar bdt);
    float luasS(bdatar bdt);

    int main(){
        bdatar bdt;
        printf("Masukkan panjang: ");
        scanf("%d", &bdt.p);
        fgetc(stdin);
        printf("Masukkan lebar: ");
        scanf("%d", &bdt.l);
        fgetc(stdin);
        printf("Masukkan jari-jari: ");
        scanf("%d", &bdt.r);
        fgetc(stdin);

        printf("Luas Persegi Panjang: %d\nLuas Lingkaran: %.1f\n", luasP(bdt), luasS(bdt));


        return 0;
    }

    int luasP(bdatar bdt){
        int hasil;
        hasil = bdt.l*bdt.p;
        return hasil;
    }
    float luasS(bdatar bdt){
        float hasil;
        hasil = phi * ((float)bdt.r*(float)bdt.r);
        return hasil;
    }