#include <stdio.h>
int b;

char *namaf();
void print();  

int main(){
    
    print();
   
    return 0;
}

char *namaf(){
    char *file = "dwdw";
    scanf("%d", &b);
    return file;
}

void print(){
    char *x;
    x = namaf();
    printf("%s", x);
}