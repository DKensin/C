/* Write a pattern like a right angle triangle with a number which will repeat a number in a row */

#include <stdio.h>

int main(void)
{
    int n, i, j;

    printf("The pattern like: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
