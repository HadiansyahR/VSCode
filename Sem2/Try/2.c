#include <stdio.h>
#include <stdbool.h>

int main(){
    int i,n;
    FILE *file;
    char adminData[20];
    file = fopen("admin.txt", "r");

    if (fgets(adminData, sizeof(adminData), file) != NULL)
    {
        printf("data ada");
    }else
    {
        printf("data tidak ada");
        return 1;
    }
    
    
    


    return 0;
}