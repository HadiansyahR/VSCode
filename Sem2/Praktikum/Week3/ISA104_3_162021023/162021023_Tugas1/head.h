#ifndef header
#define header

typedef struct
{
    char nama[30];
    int quiz, uts, uas;
}nilaimhs;

int inputjml();
void inputdata(nilaimhs nilai[], int n);
void tampil(nilaimhs nilai[], int n);
void mean(nilaimhs nilai[], int count);

#endif