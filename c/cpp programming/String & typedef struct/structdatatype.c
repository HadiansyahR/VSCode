#include <stdio.h>
#include <string.h>

// membuat struct
struct Mahasiswa {
    //char nrp[20];
    //char nama[20];
    char *nrp;
    char *nama;
    float ipk;
};

int main(){
    // menggunakan struct
    struct Mahasiswa mhs1;
    
    // mengisi nilai ke struct
    strcpy(mhs1.nrp, "162023001");
    strcpy(mhs1.nama, "Anton");
    mhs1.ipk = 3.2;

    // mencetak data struct
    printf("NRP\t: %s\n",mhs1.nrp);
    printf("Nama\t: %s\n",mhs1.nama);
    printf("IPK\t: %.2f\n",mhs1.ipk);

return 0;
}