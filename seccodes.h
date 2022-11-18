#include <string.h>
#include <locale.h>
#include "./random.h"


#define ACIILMIT 255 

void cfgEpChar()
{
    setlocale(LC_ALL,"");
}

void genRndPassword(char *password)
{
    cfgEpChar();
    genSeed();

    int i;

    for(i = 0;i < sizeof(password);i++)
    {
        password[i] = int_genRnd(ACIILMIT);  
    }
}