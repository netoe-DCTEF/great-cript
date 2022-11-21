#define mnull 0

int int_power(const int value,const int i)
{
    int n = value;
    int _i = 1;


    if(i == 0)
    {
        return mnull;
    }
    
    while( _i < i )
    {
        n = n * n;
        _i++;
    }

    return n;
}