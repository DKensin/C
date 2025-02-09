/* Display the cube of the number up to an interger */

#include <stdio.h>

int main(void)
{
    int n, i;

    printf("input number: ");
    scanf("%d", &n);

    printf("output: \n");
    for (i = 1; i <= n; i++)
    {
        printf("%d^3 = %d\n", i, i*i*i);
    }

    return 0;
}
