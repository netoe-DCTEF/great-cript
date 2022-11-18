#include <stdio.h>
#include "seccodes.h"

char senha[10];


int main()
{
    genRndPassword(senha);
    puts(senha);
}