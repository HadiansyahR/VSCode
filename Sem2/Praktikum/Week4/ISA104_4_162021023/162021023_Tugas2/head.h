#ifndef head
#define head
#include <stdio.h>
#define phi 3.14
struct lingkaran
{
    float r;
};

struct persegi
{
    int p, l;
};

typedef struct
{
    struct lingkaran round;
    struct persegi ps;
}bdatar;

void headmenu();
void menu(bdatar bdt);
bdatar input(int pil);
void luasL(bdatar lingk);
void luasP(bdatar psg);
int keluar();
#endif