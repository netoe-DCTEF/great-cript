#include <stdlib.h>
#include <time.h>


void genSeed()
{
    srand(time(NULL));
}

int int_genRnd(const int limit)
{
    return rand() % limit;
}

int int_genRandNxtTo(const int start,const int limit)
{
    int number;

    do
    {
        number = rand() % limit;
    }
    while(number < start);

    return number;
}


