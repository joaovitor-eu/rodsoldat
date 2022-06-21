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
        en_us();
    }
    if (lang == 2)
    {
        system("cls");
        pt_br();
    }
    return(0);
}