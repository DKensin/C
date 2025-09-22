#include <stdio.h>

int bitcount (unsigned int x)
{
    int count = 0;

    for (int i = 0; x != 0; x &= (x-1))
    {
        count++;
    }
    return count;
}

int main(void)
{
    unsigned int x = 13;
    unsigned result;

    result = bitcount(x);
    printf("%u\n", result);

    return 0;
}