/*  histogram of different characters in its input */

#include <stdio.h>

#define MAX_CHAR_LEN 128

int main()
{
    int count[MAX_CHAR_LEN] = {0};
    char letter;
    int c, i;

    /* Count each characters in string */
    while ((c = getchar()) != EOF)
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            count[c]++;
        }
    }
    /* Print the histogram */
    for (int i = 0; i < MAX_CHAR_LEN; i++)
    {
        if (count[i] > 0)
        {
            printf("%c| ", i);
            for (int j = 0; j < count[i]; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}