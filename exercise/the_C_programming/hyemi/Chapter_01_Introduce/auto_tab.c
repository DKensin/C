/**
 * Write a program detab, which replaces tabs in the input with a random number of blanks to spaces
 **/
#include <stdio.h>

int main (void)
{
    int c;
    int column = 0;
    int tab_stop;
    int k;
    int space = 0;

    printf("User enter number of tabstop: ");
    scanf("%d", &k);
    while ((c = getchar()) != '\n' && c != EOF);

    while ((c = getchar()) != EOF)
    {
        // Hello        world       hien
        if ((c == '\t'))
        {
            tab_stop = ((column/k) + 1) * k;
            for (int i = column; i < tab_stop; i++)
            {
                // putchar(' ');
                space++;
                printf("%d", space);
            }
            column = tab_stop;
        }
        else
        {
            putchar(c);
            column++;
        }
    }

    return 0;
}