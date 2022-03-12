#include <stdio.h>
#define SIZE 100 

/* function prototype */ 
int linearSearch( const int array[], int key, int size ); 
/* bandingkan kunci untuk setiap elemen array sampai lokasi ditemukan atau sampai akhir larik tercapai; return subskrip elemen jika ditemukan, -1 jika tidak ditemukan */

int linearSearch( const int array[], int key, int size ) {
    int n; /* counter */ 

    /* pengulangan dalam array */

    for ( n = 0; n < size; ++n ) { 
       if ( array[ n ] == key ) { 
           return n; /* return lokasi kunci */ 
       } /* end if */ 
    } /* end for */ 
    return -1; /* key not found */ 
} /* end function linearSearch */

int main(){
    int a[ SIZE ]; /* membuat array a */ 
    int x; /* counter */ 
    int searchKey; /* kunci pencarian */ 
    int element; /* variable untuk menyimpan lokasi searchKey */ 

    /* mengisi data array */ 
    for ( x = 0; x < SIZE; x++ ) { 
        a[x] = 2 * x; 
    }

    printf( "Masukan angka yang dicari:\n" ); 
    scanf( "%d", &searchKey );

    /* melakukan pencarian melalui fungsi linearSearch */

    element = linearSearch( a, searchKey, SIZE );

    /* Menampilkan hasil */ 

    if ( element != -1 ) { 
        printf( "Angka ditemukan di elemen ke-%d\n", element ); 
    } else { 
        printf( "Nilai tidak ditemukan\n" ); 
    } /* endif */ 

    return 0;
}