/** invertbits:
 *  get n bits from x begin at p 
 * change bit at n-th bit at p (leave others unchanged)
 */

#include <stdio.h>

unsigned invert(unsigned int x, int p, int n);
void print_binary(unsigned x); //(print output, not return data)

int main (void)
{
    unsigned x = 0b10110100; //180
    int p = 4;
    int n = 3;
    unsigned result;

    result = invert(x, p, n);
    print_binary(result);
    printf("\n%u", result);

    return 0;
}

unsigned invert(unsigned int x, int p, int n)
{
    return x ^ (((1 << n) - 1) << (p - n +1));
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