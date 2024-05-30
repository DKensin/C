/* Display the multiplication table for a given interger */

#include <stdio.h>

int main(void)
{
    int n, i;

    printf("input the number: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;
}
