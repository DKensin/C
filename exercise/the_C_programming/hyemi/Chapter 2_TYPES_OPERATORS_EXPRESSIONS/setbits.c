/* setbits: get n bits from y change n bits of x that begin at p (leave others unchanged) */

#include <stdio.h>

unsigned setbits(unsigned int x, unsigned int y, int p, int n);
void print_binary(unsigned x); //(print output, not return data)

int main (void)
{
    unsigned x; //172
    unsigned y; //57
    int p;
    int n;
    unsigned result;

    result = setbits(x, y, p, n);
    print_binary(result);

    return 0;
}

unsigned setbits(unsigned int x, unsigned int y, int p, int n)
{
    return (x & ~(((1 << n) - 1) << (p - n + 1))) | ((y & ((1 << n) - 1)) << ( p - n + 1));
}

void print_binary(unsigned int x)
{
    for (int i = 7; i >= 0; i--)
    {
        if ((x & (1u << i)) != 0)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}