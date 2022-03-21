#ifndef jam_H
#define jam_H

typedef struct
{
    int HH;
    int MM;
    int SS;
}jam;

//mengisi sebuah jam J dengan 00:00:00
void ResetJam(jam *J);

//menulis jam
void TulisJam(jam J);

//konversi jam ke detik
int JamToDetik(jam J);

//konversi detik ke jam
jam DetikToJam(int d);

#endif