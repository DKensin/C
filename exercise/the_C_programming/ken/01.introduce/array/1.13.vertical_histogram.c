/**
 * Print a histogram of the lengths of words in its input
 * Second version: vertical horizontal
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
    int max_wl = 0;                 /* word with the most frequency */

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

    /* find the max_wl */
    for (i = 0; i <= max_len; i++)
    {
        if (words_len[i] > max_wl)
        {
            max_wl = words_len[i];
        }
    }

    /* Print vertical histogram */
    while (max_wl > (-1))
    {
        printf("%2d | ", max_wl);
        for (i = 1; i <= max_len; i++)
        {
            printf("%s ", (words_len[i] >= (max_wl + 1) ? ("|") : (" ")));
        }
        putchar('\n');
        max_wl--;
    }

    /* Print axis label */
    printf("   0 ");
    for (i = 1; i <= max_len; i++)
    {
        printf("%d ", i);
    }
    putchar('\n');

    return 0;
}