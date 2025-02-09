/* Write a program in C to display the first 10 natural numbers */

#include <stdio.h>

int main(void)
{
    int n, i;

    printf("enter n: ");
    scanf("%d", &n);

    printf("The first %d natural numbers are: \n", n);
    for (i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}
