#include <stdio.h>

int main(void)
{
    int c;  /* use int instead of char to store EOF value */

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
}