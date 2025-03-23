/**
 * Print a histogram of the lengths of words in its input
 * First version: bars horizontal
 */

#include <stdio.h>

#define MAX_SIZE        (1000u)

int main(void)
{
    int words_len[MAX_SIZE];        /* store word length */
    int len = 0;                    /* length of each word */
    int c;
    int i;
    int max_len = 0;                /* word which has longest length */

    for (i = 0; i < MAX_SIZE; i++)
    {
        words_len[i] = 0;
    }

    while (EOF != (c = getchar()))
    {
        if ((' ' == c) || ('\n' == c))  /* if encounter a blank or newline */
        {
            words_len[len]++;           /* record len of word */
            if (len > max_len)
            {
                max_len = len;          /* count word has longest length */
            }
            len = 0;
        }
        else if ((',' != c) && ('.' != c))       /* skip command and dot character */
        {
            len++;
        }
    }

    for (i = 1; i <= max_len; i++)
    {
        printf("%3d | ", i);
        if (0 != words_len[i])
        {
            while (words_len[i])
            {
                putchar('*');
                words_len[i]--;
            }
        }
        putchar('\n');
    }
    putchar('\n');

    return 0;
}