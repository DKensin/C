/**
 * Exercise 1-14: Write a program to print a histogram of the frequencies of different characters in its input.
 * Implement with horizontal bar
 */

#include <stdio.h>

#define ASCII_RANGE         (128u)

int main(void)
{
    int freq[ASCII_RANGE];
    int i;
    int c;
    int max = EOF;              /* record max character value */

    /* Initial the whole array */
    for (i = 0; i < ASCII_RANGE; i++)
    {
        freq[i] = 0;
    }

    while (EOF != (c = getchar()))
    {
        if (c >= ASCII_RANGE)
        {
            continue;
        }
        freq[c]++;
        if (c > max)
        {
            max = c;
        }
    }

    for (i = 0; i <= max; i++)
    {
        if (freq[i] > 0)
        {
            printf("%c (%3d): ", i, i);
            while (freq[i]--)
            {
                putchar('*');
            }
            putchar('\n');
        }
    }

    return 0;
}