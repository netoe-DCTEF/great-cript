/*
    Made by Ely Torres Neto in 20/11/22
    I'll add a double rand!
*/

#include <stdlib.h>
#include <time.h>
#include "mathp.h"

#define DBLE_AM 10

typedef const enum {
    ONE = 1,
    TWO = 2,
    THREE = 3,
    FOUR = 4,
    FIVE = 5,
    SIX = 6,
    SEVEN = 7,
    EIGHT = 8,
    NINE = 9,
    TEN = 10
}__L2;


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



/*double double_genRnd(const int limit,__L2 l2)
{

    return (rand() % limit * int_power(limit,int_genRnd(limit))) / (l2 *DBLE_AM) ;
}
*/

