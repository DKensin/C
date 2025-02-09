/*Display the multiplier table vertically from 1 to n */

#include <stdio.h>

int main(void)
{
    int n, i, j;

    printf("input upto the table number starting from 1: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= n ; j++)
        {
            printf("%d x %d = %d\t", j, i, i*j);
        }
        printf("\n");
    }

    return 0;
}
