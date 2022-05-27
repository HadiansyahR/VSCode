#include <stdio.h>
#include <stdbool.h>
#include <string.h>
typedef struct admin
{
    char username[20];
    char password[10];
}dtadm;

int main(){
    FILE *f;
    dtadm adm1;
    int current_line = 1, read_line = 1, test;
    char x[sizeof(adm1.username)] = "ayam";
    f = fopen("admin.txt", "r");
    bool read_status = true;
    if (f == NULL)
    {
        printf("error opening file\n");
        return 1;
    }

    // do
    // {
    //     // fgets(adm1.username, sizeof(adm1.username), f);
    //     // test = strcmp(adm1.username, x);
    //     // if (feof(f))
    //     // {
    //     //     read_status = false;
    //     //     printf("Error line doesn't exist\n");
    //     // }
    //     // else if (current_line == read_line)
    //     // {
    //     //     read_status = false;
    //     //     printf("%s\n", adm1.username);
    //     // }
    //     // if (strstr(adm1.username, x) != NULL)
    //     // {
    //     //     printf("%s\n", adm1.username);
    //     // }

    //     //printf("%s", adm1.username);
        
    //     // if (test == 0)
    //     // {
    //     //     read_status = false;
    //     // }
        
        
    //     //current_line++;
        
    // } while (read_status);
    
    printf("%s\n", adm1.username);
    
    return 0;
}