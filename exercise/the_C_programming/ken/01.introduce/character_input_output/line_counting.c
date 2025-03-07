#include <stdio.h>

int main(void)
{
    int c;
    int nl = 0;

    while ((c = getchar()) != EOF)
    {
        if ('\n' == c)
        {
            nl++;
        }
    }

    printf("Number of lines = %d\n", nl);

    return 0;
}