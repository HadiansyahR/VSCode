#include <stdio.h>
#include <string.h>
typedef struct
{
    int kode_prodi, total_mhs;
    char nama_prodi[50];
}prodi;

//Function input jumlah data
int inputJmlData();
int inputJmlData(){
//Algoritma input jumlah data
    int n;
    printf("Masukkan jumlah data: \n");
    scanf("%d", &n);fgetc(stdin);
    return n;
}

/* 
 * void menu();
 void menu(){

 }
 **/

//Prosedur input data
void inputData(int i, int n, prodi* dtprodi);
void inputData(int i, int n, prodi* dtprodi){
//Algoritma input data
printf("Banyak data %d: ", n);
    for (i = 0; i < n; i++)
            {
                printf("\nMasukkan kode prodi: ");
                scanf("%d", &dtprodi[i].kode_prodi);
                fgetc(stdin);
                printf("Masukkan nama prodi: ");
                fgets(dtprodi[i].nama_prodi, sizeof(dtprodi[i].nama_prodi), stdin);
                dtprodi[i].nama_prodi[strlen(dtprodi[i].nama_prodi)-1] = 0;
                printf("Masukkan total mahasiswa: ");
                scanf("%d", &dtprodi[i].total_mhs);
                fgetc(stdin);
            }
}

//Prosedur sorting
void sort(int i, int n, prodi* dtprodi);
void sort(int i, int n, prodi* dtprodi){
    //Algoritma bubble sort
    printf("=============================================\n");
    printf("Proses pengurutan dengan Bubble Sort\n");
    printf("=============================================\n");

    int pass, tmpkode, tmpjml;
    char tmpnp[50];
    for (pass = 1; pass < n; pass++)
            {
                for (i = 0; i < n-1; i++)
                {
                    if (dtprodi[i].kode_prodi > dtprodi[i+1].kode_prodi)
                    {
                        tmpkode = dtprodi[i].kode_prodi;
                        dtprodi[i].kode_prodi = dtprodi[i+1].kode_prodi;
                        dtprodi[i+1].kode_prodi = tmpkode;

                        strcpy(tmpnp, dtprodi[i].nama_prodi);
                        strcpy(dtprodi[i].nama_prodi, dtprodi[i+1].nama_prodi);
                        strcpy(dtprodi[i+1].nama_prodi, tmpnp);

                        tmpjml = dtprodi[i].total_mhs;
                        dtprodi[i].total_mhs = dtprodi[i+1].total_mhs;
                        dtprodi[i+1].total_mhs = tmpjml;
                    }
                }    
            }
    printf("Data prodi setelah diurutkan :\n");
    printf("---------------------------------\n");
    printf("%s\t%s\t%s\n", "Kode", "Prodi", "Mahasiswa");
    printf("---------------------------------\n");

    for (i = 0; i < n; i++)
        {
            printf("%d\t%s\t%d\n", dtprodi[i].kode_prodi, dtprodi[i].nama_prodi, dtprodi[i].total_mhs);
        }
    printf("---------------------------------\n");
}

//Prosedur linear search
void linearSearch(int i, int n, prodi* dtprodi);
void linearSearch(int i, int n, prodi* dtprodi){
    //Algoritma linear search
    printf("=============================================\n");
    printf("Pencarian Berdasarkan Nama Prodi\n");
    printf("=============================================\n");
    char keyword[50];
    int findstat = 0;
    printf("Masukkan keyword: ");
    scanf("%s", keyword); fgetc(stdin);

    printf("\nHasil Pencarian Linear Search:\n");
    printf("-----------------------------------------------\n");

        printf("%s\t%s\t%s\n", "Kode", "Prodi", "Mahasiswa");
        printf("-----------------------------------------------\n");
            for (i = 0; i < n; i++)
            {
                if (strstr(dtprodi[i].nama_prodi, keyword)!=NULL)
                {
                    findstat++;
                    printf("%d\t%s\t%d\n", dtprodi[i].kode_prodi, dtprodi[i].nama_prodi, dtprodi[i].total_mhs);
                }                
            }
            
            if(findstat == 0)
            {
                printf("Data tidak ada\n");
            }
        printf("-----------------------------------------------\n");       
}

//Prosedur binary search
void binarySearch(int i, int n, prodi* dtprodi);
void binarySearch(int i, int n, prodi* dtprodi){
    //Algoritma binary search
    int findstat = -1, high, low, mid, x, keycode;
    low = 0; high = n-1;
    printf("=============================================\n");
    printf("Pencarian Berdasarkan Kode Prodi\n");
    printf("=============================================\n");
    printf("Masukkan keycode: ");
    scanf("%d", &keycode); fgetc(stdin);
    printf("\nHasil Pencarian Binary Search:\n");
        if (keycode != dtprodi[low].kode_prodi)
        {
            while (low<=high)
            {
                mid = (low+high)/2;
                if (keycode == dtprodi[mid].kode_prodi)
                {
                    findstat = mid;
                    break;
                }else if (keycode > dtprodi[mid].kode_prodi)
                {
                    low = mid + 1;
                }else
                {
                    high = mid - 1;
                }               
            }
        }else
        {
            findstat = low;
        }
        
        printf("%s\t%s\t%s\n", "Kode", "Prodi", "Mahasiswa");

        if (findstat == -1)
        {
            printf("Prodi tidak ditemukan!\n");
        }else
        {
            printf("Ditemukan!\n");
            printf("-----------------------------------------------\n");
            printf("%d\t%s\t%d\n", dtprodi[findstat].kode_prodi, dtprodi[findstat].nama_prodi, dtprodi[findstat].total_mhs);
        }
        printf("-----------------------------------------------\n");
        findstat = -1;
}

//Prosedur tampilkan data
void tampil(int i, int n, prodi* dtprodi);
void tampil(int i, int n, prodi* dtprodi){
    //Algoritma tampilkan data
    printf("Banyak data %d: \n", n);
        printf("%s\t%s\t%s\n", "Kode", "Prodi", "Mahasiswa");
        for (i = 0; i < n; i++)
        {
            printf("%d\t%s\t%d\n", dtprodi[i].kode_prodi, dtprodi[i].nama_prodi, dtprodi[i].total_mhs);
        }
}
int main(){
    //variable umum
    int i,n, pil, status = 1;

    n = inputJmlData();
    prodi dtprodi[n];

    while (status == 1)
    {
        printf("=============================================\n");
        printf("\tKelola Program Studi Itenas\n");
        printf("=============================================\n");
        printf("Menu: ");
        printf("\n1. Input data Prodi\n2. Urutkan data Prodi\n3. Pencarian berdasarkan Nama Prodi (Linear Search)");
        printf("\n4. Pencarian berdasarkan Kode Prodi (Binary Search)\n5. Tampilkan data Prodi\n6. Exit\n");
        
        printf("\nMasukkan pilihan 1/2/3/4/5/6: "); scanf("%d", &pil); fgetc(stdin);

        switch (pil)
        {
        case 1:
            inputData(i, n, dtprodi);
            break;
        case 2:
            sort(i, n, dtprodi);
            break;
        case 3:
            linearSearch(i, n, dtprodi);
            break;
        case 4:
            binarySearch(i, n, dtprodi);
            break;
        case 5:
            tampil(i, n, dtprodi);
            break;
        case 6:
            status = 0;
            break;
        default:
            printf("Pilihan Salah\nSilahkan Coba Lagi\n");
            break;
        }
    }
    printf("Sesi selesai\nExit status %d", status);
    return 0;
}