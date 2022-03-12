#include <stdio.h>
#include <string.h>

//define typedef KTP yang berbentuk struct
typedef struct
{
    char nama[50],tempatL[20],tanggalL[10],jenisK[15],golDar[3],alamat[20],kelDes[15],kec[15],agama[10]
    ,statusKawin[20],pekerjaan[30],kewarganegaraan[3],berlakuHingga[15];
    long long int NIK;
    int RT, RW;
}ktp;


int main(){
    ktp orang[5];
    int i;

    orang[0].NIK = 17182020001;
    strcpy(orang[0].nama, "Micel");
    strcpy(orang[0].tempatL, "Bandung");
    strcpy(orang[0].tanggalL, "26-08-2001");
    strcpy(orang[0].jenisK, "Laki-laki");
    strcpy(orang[0].golDar, "B+");
    strcpy(orang[0].alamat, "Jalan Suci 81287");
    orang[0].RT = 3;
    orang[0].RW = 18;
    strcpy(orang[0].kelDes, "Cisitu");
    strcpy(orang[0].kec, "Ciparay");
    strcpy(orang[0].agama, "Protestan");
    strcpy(orang[0].statusKawin, "Belum Kawin");
    strcpy(orang[0].pekerjaan, "Pelajar/Mahasiswa");
    strcpy(orang[0].kewarganegaraan, "WNA");
    strcpy(orang[0].berlakuHingga, "Seumur Hidup");

    orang[1].NIK = 17182020022;
    strcpy(orang[1].nama, "Lele");
    strcpy(orang[1].tempatL, "Bandung");
    strcpy(orang[1].tanggalL, "26-01-2003");
    strcpy(orang[1].jenisK, "Laki-laki");
    strcpy(orang[1].golDar, "AB");
    strcpy(orang[1].alamat, "Jalan Damai 12748");
    orang[1].RT = 4;
    orang[1].RW = 10;
    strcpy(orang[1].kelDes, "Cibiru");
    strcpy(orang[1].kec, "Setu babakan");
    strcpy(orang[1].agama, "Islam");
    strcpy(orang[1].statusKawin, "Belum Kawin");
    strcpy(orang[1].pekerjaan, "Pelajar/Mahasiswa");
    strcpy(orang[1].kewarganegaraan, "WNI");
    strcpy(orang[1].berlakuHingga, "Seumur Hidup");

    orang[2].NIK = 17182020009;
    strcpy(orang[2].nama, "Siska");
    strcpy(orang[2].tempatL, "Jogja");
    strcpy(orang[2].tanggalL, "01-08-1998");
    strcpy(orang[2].jenisK, "Perempuan");
    strcpy(orang[2].golDar, "B-");
    strcpy(orang[2].alamat, "Jalan jalan 36587");
    orang[2].RT = 5;
    orang[2].RW = 7;
    strcpy(orang[2].kelDes, "Babakan");
    strcpy(orang[2].kec, "Kulon wetan");
    strcpy(orang[2].agama, "Buddha");
    strcpy(orang[2].statusKawin, "Kawin");
    strcpy(orang[2].pekerjaan, "Pegawai Swasta");
    strcpy(orang[2].kewarganegaraan, "WNI");
    strcpy(orang[2].berlakuHingga, "Seumur Hidup");

    orang[3].NIK = 17182020021;
    strcpy(orang[3].nama, "Karin");
    strcpy(orang[3].tempatL, "Bandung");
    strcpy(orang[3].tanggalL, "26-08-2001");
    strcpy(orang[3].jenisK, "Perempuan");
    strcpy(orang[3].golDar, "B");
    strcpy(orang[3].alamat, "Jalan kenangan 2753");
    orang[3].RT = 1;
    orang[3].RW = 3;
    strcpy(orang[3].kelDes, "Cibinong");
    strcpy(orang[3].kec, "Cibaduyut");
    strcpy(orang[3].agama, "Islam");
    strcpy(orang[3].statusKawin, "Belum Kawin");
    strcpy(orang[3].pekerjaan, "Pelajar/Mahasiswa");
    strcpy(orang[3].kewarganegaraan, "WNI");
    strcpy(orang[3].berlakuHingga, "Seumur Hidup");

    orang[4].NIK = 17182020001;
    strcpy(orang[4].nama, "Maykel Lele");
    strcpy(orang[4].tempatL, "Jakarta");
    strcpy(orang[4].tanggalL, "30-01-1976");
    strcpy(orang[4].jenisK, "Laki-laki");
    strcpy(orang[4].golDar, "A");
    strcpy(orang[4].alamat, "Jalan kaki 63412");
    orang[4].RT = 2;
    orang[4].RW = 2;
    strcpy(orang[4].kelDes, "Cimeta");
    strcpy(orang[4].kec, "Bojong soang");
    strcpy(orang[4].agama, "Katolik");
    strcpy(orang[4].statusKawin, "Kawin");
    strcpy(orang[4].pekerjaan, "Pegawai BUMN");
    strcpy(orang[4].kewarganegaraan, "WNA");
    strcpy(orang[4].berlakuHingga, "Seumur Hidup");

    for (i = 0; i < 5; i++)
    {
        if (strcmp(orang[i].tempatL, "Bandung")==0)
        {
            printf("NIK\t: %d\n", orang[i].NIK);
            printf("Nama\t: %s\n", orang[i].nama);
            printf("Tempat/Tgl Lahir: %s, %s\n", orang[i].tempatL, orang[i].tanggalL);
            printf("Jenis Kelamin\t: %s\t\tGol. Darah: %s\n", orang[i].jenisK, orang[i].golDar);
            printf("Alamat\t: %s\n", orang[i].alamat);
            printf("\tRT/RW\t: %d/%d\n", orang[i].RT, orang[i].RW);
            printf("\tKel/Des\t: %s\n", orang[i].kelDes);
            printf("\tKecamatan: %s\n", orang[i].kec);
            printf("Agama\t\t: %s\n", orang[i].agama);
            printf("Status Perkawinan: %s\n", orang[i].statusKawin);
            printf("Pekerjaan\t: %s\n", orang[i].pekerjaan);
            printf("Kewarganegaraan\t: %s\n", orang[i].kewarganegaraan);
            printf("Berlaku Hingga\t: %s\n", orang[i].berlakuHingga);
            printf("\n");
        }
        
    }
    

    return 0;
}