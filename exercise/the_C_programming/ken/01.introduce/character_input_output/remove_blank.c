/* Remove (trim) all redundant blank */

#include <stdio.h>

int main(void)
{
    int c;
    int last_char = ' ';    /* to handle edge case */

    while (EOF != (c = getchar()))
    {
        if (' ' != c)
        {
            putchar(c);
        }
        else if (' ' != last_char)
        {
            putchar(c);
        }
        last_char = c; /* store the last character */
    }

    return 0;
}