/* Display (*) like a right angle triangle */

#include <stdio.h>

int main(void)
{
    int n;
    int i, j;

    printf("the pattern like: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j < i; j++)
        {
            printf("*");
        }
        printf("*\n");
    }

    return 0;
}
