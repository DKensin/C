/* Remove (trim) all redundant blank */

#include <stdio.h>

int main(void)
{
    int c;

    while (EOF != (c = getchar()))
    {
        if (' ' != c)
        {
            putchar(c);
        }
        else
        {
            while (' ' == c)
            {
                c = getchar();
            }
            putchar(' ');
            putchar(c);
        }
    }

    return 0;
}