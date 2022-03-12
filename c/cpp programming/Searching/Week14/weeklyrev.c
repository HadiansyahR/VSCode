#include <stdio.h>
#include <string.h>
typedef struct
{
    int kode_prodi, total_mhs;
    char nama_prodi[50];
}prodi;

int main(){
    //variable umum
    int i,n, pil, status = 1;
    printf("Masukkan jumlah data: \n");
    scanf("%d", &n);
    prodi dtprodi[n];

    //variable untuk bubble sort
    int pass, tmpkode, tmpjml;
    char tmpnp[50];

    //variable search
    int findstat = -1, high, low, mid, x, keycode;
    char keyword[50];
    //x = sizeof(dtprodi)/sizeof(int);
    low = 0; high = n-1;

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
            break;
        case 2:
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
            break;
        case 3:
            printf("Masukkan keyword: ");
            scanf("%s", keyword); fgetc(stdin);
            
            printf("%s\t%s\t%s\n", "Kode", "Prodi", "Mahasiswa");
            for (i = 0; i < n; i++)
            {
                if (strstr(dtprodi[i].nama_prodi, keyword)!=NULL)
                {
                    printf("%d\t%s\t%d\n", dtprodi[i].kode_prodi, dtprodi[i].nama_prodi, dtprodi[i].total_mhs);
                }
            }            
            break;
        case 4://belum beres
            printf("Masukkan keycode: ");
            scanf("%d", &keycode); fgetc(stdin);

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
            printf("Data tidak ada");
        }else
        {
            printf("%d\t%s\t%d\n", dtprodi[findstat].kode_prodi, dtprodi[findstat].nama_prodi, dtprodi[findstat].total_mhs);
        }

        findstat = -1;
            break;
        case 5:
            printf("%s\t%s\t%s\n", "Kode", "Prodi", "Mahasiswa");
            for (i = 0; i < n; i++)
            {
                printf("%d\t%s\t%d\n", dtprodi[i].kode_prodi, dtprodi[i].nama_prodi, dtprodi[i].total_mhs);
            }
            break;
        case 6:
            status = 0;
            break;
        default:
            break;
        }
    }
    printf("Sesi selesai\nExit status %d", status);
    return 0;
}