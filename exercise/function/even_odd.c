/* Write a C program to check whether a number is even or odd using functions. */

#include <stdio.h>

int check(int n);

int main (void)
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);

    check(n);

    return 0;
}

int check(int n)
{
    if(n % 2 == 0)
    {
        printf("%d is that is even\n", n);
    }
    else
    {
        printf("%d that is odd\n", n);
    }
}
