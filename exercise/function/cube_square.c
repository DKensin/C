/* Write a program to find cube, square of any numbers */

#include <stdio.h>

/* Function Prototype */
int square(int a);
int cube(int a);

int main(void)
{
    int a;

    printf("enter a: ");
    scanf("%d", &a);

    printf("Square is: %d\n", square(a));
    printf("Cube is: %d\n", cube(a));

    return 0;
}

/* Function definition */
int square(int a)
{
    return a*a;
}

int cube(int a)
{
    return a*a*a;
}
