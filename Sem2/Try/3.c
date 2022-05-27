#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
    int i;
    bool status = false;
    FILE *f;
    char c;
    char *str1 = "ayam";
    char str[10];
    
    f = fopen("admin.txt", "r");
    int linetotal = 2;
    // if (f != NULL)
    // {
    //     while ((c = fgetc(f))!= EOF)
    //     {
    //         fgets(str, sizeof(str), f);
    //         if (strcmp(str, str1) == 0)
    //         {
    //             /* code */
    //         }
            
    //     }
        
    // }
    i=0;
    while (i<2)
    {
        fscanf(f, "%s", str);
        printf("%s\n", str);
        i++;
    }
        
    
    // printf("%d", strcmp(str, str1));

    
    // for (i = 0; i < linetotal; i++)
    // {
    //     fgets(str, sizeof(str), f);
    //     if (strcmp(str1, str)==0)
    //     {
    //         printf("GG");
    //     }
        
    // }
    
    
    return 0;
}