/* Compute the sum of the first 10 natural numbers */

#include <stdio.h>

int main(void)
{
    int n, i;
    int sum = 0;

    printf("enter n: ");
    scanf("%d", &n);

    printf("the sum of the first %d natural numbers are: ", n);
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%d", sum);

    return 0;
}
