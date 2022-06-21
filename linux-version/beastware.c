#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "data/en_us.h"
#include "data/pt_br.h"

int main()
{
    int lang;
    system("clear");
    printf("Select A Language:\n\n");
    printf("[ 1 ] - English\n");
    printf("[ 2 ] - Portuguese\n\n");
    printf("> ");
    scanf("%d", &lang);
    if (lang == 1)
    {
        system("clear");
        en_us();
    }
    if (lang == 2)
    {
        system("clear");
        pt_br();
    }
    return(0);
}