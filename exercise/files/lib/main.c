#include <stdio.h>
#include "calculation.h"

int main(void)
{
    int a, b;

    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);

    printf("Sum is: %d\n", sum(a, b));
    printf("Sub is: %d\n", sub(a, b));
    printf("Mul is: %d\n", mul(a, b));
    printf("Div is: %d\n", div(a, b));

    return 0;
}
