#include <stdio.h>
#include <string.h>
// Definisikan tipe data bentukan mahasiswa
typedef struct {
char *nrp;
char *nama;
float ipk;
} Mahasiswa; // Tipe data bentukan
int main(){
    Mahasiswa mhs1; // Tidak perlu struct
    // mengisi mhs1
    strcpy(mhs1.nrp,"162023001");
    strcpy(mhs1.nama,"Anton");
    mhs1.ipk = 3.6;
    // mencetak data struct
    printf("NRP: %s\n",mhs1.nrp);
    printf("Nama: %s\n",mhs1.nama);
    printf("IPK: %f\n",mhs1.ipk);
return 0;
}
