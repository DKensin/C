#include <stdio.h>

#define sum(a, b) ((a) + (b))
#define sub(a, b) ((a) - (b))
#define mul(a, b) ((a) * (b))
#define div(a, b) ((a) / (b))

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
