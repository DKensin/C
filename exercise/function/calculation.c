/* Write sum, sub, multiple, divide calculation */

#include <stdio.h>

/* Function Prototype */
int mul(int a, int b);
int sub(int a, int b);
int add(int a, int b);
int div(int a, int b);

int main(void)
{
    int a, b;

    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);

    printf("Multiple is: %d\n", mul(a, b));
    printf("Substraction is: %d\n", sub(a, b));
    printf("Addition is: %d\n", add(a, b));
    printf("Division is: %d\n", div(a, b));

    return 0;
}

/* Function definition */
int mul(int a, int b)
{
    return a*b;
}

int sub(int a, int b)
{
    return a-b;
}

int add(int a, int b)
{
    return a+b;
}

int div(int a, int b)
{
    return a/b;
}
