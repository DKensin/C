/* Display the n terms of odd natural numbers and their sum */

#include <stdio.h>

int main(void)
{
    int n, i;
    int sum = 0;
    int count = 1;

    printf("input numbers: ");
    scanf("%d", &n);

    printf("the odd numbers: ");
    for (i = 1; count <= n; i+=2)
    {
        printf("%d ", i);
        count++;
        sum += i;
    }
    printf("\nsum of odd upto %d: %d", n, sum);

    return 0;
}
