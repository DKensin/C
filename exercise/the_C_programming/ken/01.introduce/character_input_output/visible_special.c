/**
 * Exercise 1.10: Copy its input to output
 * Replace: each tab by \t, each backspace by \b, each backslash by \\
 */

#include <stdio.h>

int main(void)
{
    int c;

    while (EOF != (c = getchar()))
    {
        if ('\t' == c)
        {
            printf("\\t");
        }
        else if ('\b' == c)
        {
            printf("\\b");
        }
        else if ('\\' == c)
        {
            printf("\\\\");
        }
        else
        {
            putchar(c);
        }
    }
}