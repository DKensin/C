/* Write a C program to find maximum and minimum between two numbers using functions get from user */

#include <stdio.h>

int min(int a, int b);
int max(int a, int b);

int main (void)
{
    int a, b;

    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);

    printf("Min = %d\n", min(a, b));

    printf("Max = %d\n", max(a, b));

    return 0;
}

int min(int a, int b)
{
    if(a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int max(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

