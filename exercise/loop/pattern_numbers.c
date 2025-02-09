/* Display a pattern like a right angle triangle with a number */

#include <stdio.h>

int main(void)
{
    int n, i, j;

    printf("The pattern like: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j < i+1; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
