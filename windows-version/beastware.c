#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "data/en_us.h"

int main()
{
    int lang;
    system("cls");
    printf("Select A Language:\n\n");
    printf("[ 1 ] - English\n");
    printf("[ 2 ] - Portuguese\n\n");
    printf("> ");
    scanf("%d", &lang);
    if (lang == 1)
    {
        system("cls");
        system("pt_br.bat");
    }
    if (lang == 2)
    {
        system("cls");
       
    }
    return(0);
}
