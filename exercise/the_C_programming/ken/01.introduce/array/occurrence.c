/**
 * Count the number of occurrences of:
 *      - digits: 0 - 9
 *      - blank: space, newline, tab
 *      - others
 */

#include <stdio.h>

#define DECIMAL     (10u)

int main(void)
{
    int nwhite, nothers;
    int c;
    int i;
    int ndigits[DECIMAL];

    nwhite = nothers = 0;
    for (i = 0; i < DECIMAL; i++)
    {
        ndigits[i] = 0;
    }

    while (EOF != (c = getchar()))
    {
        if ((' ' == c) | ('\t' == c) | ('\n' == c))
        {
            nwhite++;
        }
        else if (('0' <= c) && ('9' >= c))
        {
            ndigits[c - '0']++;
        }
        else
        {
            nothers++;
        }
    }

    printf("digits: \n");
    for (i = 0; i < DECIMAL; i++)
    {
        if (0 < ndigits[i])
        {
            printf("%d: %d\n", i, ndigits[i]);
        }
    }
    printf("while space = %d\n", nwhite);
    printf("other = %d\n", nothers);

    return 0;
}