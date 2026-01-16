/**
 * Write a program detab, which replaces tabs in the input with a proper number of blanks to spaces
 **/
#include <stdio.h>
#define TAB_WIDTH    8

int main (void)
{
    int c;
    int column = 0;
    int next_tab_stop;

    while ((c = getchar()) != EOF)
    {
        // Hello        world       hien
        if ((c == '\t'))
        {
            next_tab_stop = ((column/TAB_WIDTH) + 1) * TAB_WIDTH;
            for (int i = column; i < next_tab_stop; i++)
            {
                putchar(' ');
            }
            column = next_tab_stop;
        }
        else
        {
            putchar(c);
            column++;
        }
    }

    return 0;
}