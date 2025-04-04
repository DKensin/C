/* remove trailing blanks and tabs from each line of input and to delete entirely blank lines */

#include <stdio.h>

int main (void)
{
    int c, trail;
    trail = 0;

    while ((c = getchar()) != EOF)
    {
        // Hello        world       hien
        if ((c == ' ') || (c == '\t') || (c == '\n'))
        {
            if (trail == 0)
            {
                putchar(' ');
            }
            trail++;
        }
        else
        {
            trail = 0;
            putchar(c);
        }
    }
    return 0;
}