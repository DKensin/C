#include <stdio.h>

#define IN      (1)         /* inside a word */
#define OUT     (0)         /* outside a word */

int main(void)
{
    int c;
    int nc, nw, nl;
    int state = OUT;

    nc = nw = nl = 0;

    while ((c = getchar()) != EOF)
    {
        nc++;
        if ('\n' == c)
        {
            nl++;
        }
        if (('\n' == c) | ('\t' == c) | (' ' == c))  /* end of word */
        {
            state = OUT;
        }
        else if (state == OUT)                      /* inside a word */
        {
            state = IN;
            nw++;
        }
    }
    printf("Number of lines = %d\n", nl);
    printf("Number of words = %d\n", nw);
}