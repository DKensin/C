/** right bits:
 *  get n bits from x  
 *  
 */

#include <stdio.h>

unsigned rightrot(unsigned int x, int n);
void print_binary(unsigned x); //(print output, not return data)

int main (void)
{
    unsigned x = 0b10110110; //x=182
    int n = 3;
    unsigned result;

    result = rightrot(x, n);
    print_binary(result);
    printf("\n%u", result);

    return 0;
}

unsigned rightrot(unsigned int x, int n)
{
    return ((x & (( 1 << n ) - 1)) << (8 - n)) | (x >> n);
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