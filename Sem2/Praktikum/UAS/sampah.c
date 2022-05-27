/**
 * @file sampah.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-17
 * 
 * @copyright Copyright (c) 2022
 * 
 * 
 * system("cls");
    int stat1 = 0, stat2 = 0;
    FILE *file;
    file = fopen("admin.txt", "r");
    char uname[USERNAME_MAX];
    char pass[PASSWORD_MAX];
    char tmp[30];
    char *name;
    char *pw;

    char c;
    bool readStatus = true;
    bool unameMatch = false;
    bool passMatch = false;

    int totalLine = 0, currentLine = 1;

    printf("Login\n\n");
    printf("Username: ");
    gets(uname);
    printf("Password: ");
    gets(pass);

    name = uname;
    pw = pass;
    
    // printf("%s\n%s\n", name, pw);
    do
    {
        c = getc(file);
        if (c == '\n')
        {
            totalLine = totalLine + 1;
        }
        
        if (c == EOF)
        {
            readStatus = false;
            totalLine = totalLine + 1;
        }

    } while (readStatus);
    i = 0;
    while (i<totalLine)
    {
        fscanf(file, "%s", tmp);
        printf("> %s\n", tmp);
        i++;
    }
    
    // stat1 = strcmp(tmp, name);
    // while (!feof(file))
    // {
    //     fscanf(file, "%s", tmp);
    //     if (strcmp(tmp, name)==0)
    //     {
    //         stat1 = 1;
    //         break;
    //     }      
    // }

    // if (stat1 == 1 && stat2 == 1)
    //     {
    //         printf("ADA!");
    //     }
    
    // if (stat1 == 1)
    // {
    //     unameMatch = true;
    // }
    
    // if (stat2 == 1)
    // {
    //     passMatch = true;
    // }

    //printf("%d\n%d\n%d\n", stat1, stat2, totalLine);
    // if (unameMatch == true && passMatch == true)
    // {
    //     printf("Masuk ke menu utama\n");
    // }
    // else if (unameMatch == true && passMatch == false)
    // {
    //     printf("Password salah, silahkan coba login lagi\n\nTekan enter untuk lanjut\n");
    //     getch();
    //     loginAdmin(i);
    // }
    // else if (unameMatch == false && passMatch == true)
    // {
    //     printf("Username salah, silahkan coba login lagi\n\nTekan enter untuk lanjut\n");
    //     getch();
    //     loginAdmin(i);
    // }
    // else
    // {
    //     printf("Akun tidak ada!\nSilahkan daftar terlebih dahulu\n\nTekan enter untuk lanjut\n");
    //     getch();
    //     daftarAdmin(i);
    // }
    
    fscanf(file, "%s", tmp);
    printf("%s\n%d\n", tmp, strcmp(uname, tmp));
    fscanf(file, "%s", tmp);
    // p = pass;
    printf("%s\n%d\n", tmp, strcmp(pass, tmp));
    
    printf("%d\n", totalLine);
    fflush(stdin);

    do
    {
        c = getc(file);
        if (c == '\n')
        {
            totalLine = totalLine + 1;
        }
        
        if (c == EOF)
        {
            readStatus = false;
            totalLine = totalLine + 1;
        }

    } while (readStatus);
    
 * 
 */