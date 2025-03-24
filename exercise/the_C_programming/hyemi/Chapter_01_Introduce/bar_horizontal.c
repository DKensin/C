/*  Ex 1-13: lengths of the words in its input:
    - bar horizontal
    - vertical orientation
*/

#include <stdio.h>

#define MAX_WORD_LEN 20

int main()
{
    int count[MAX_WORD_LEN] = {0};
    int c, len = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n')
        {
            if (len > 0 && len < MAX_WORD_LEN)
            {
                count[len]++;
            }
            len = 0; // reset len
        }
        else if (c == ',' || c == '.')
        {
            count[len] = 0;
        }
        else
        {
            if (len < MAX_WORD_LEN)
            {
                len++;
            }
        }
    }

    // Print the histogram
    for (int i = 1; i < MAX_WORD_LEN; i++)
    {
        if (count[i] >= 0)
        {
            printf("%2d | ", i);
            for (int j = 0; j < count[i]; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
