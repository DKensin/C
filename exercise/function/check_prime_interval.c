/* Write a C program to find all prime numbers between given interval using functions. */

#include <stdio.h>

int check(int a, int b);

int main(void)
{
    int a, b;

    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);

    printf("all prime numbers: ");
    check(a, b);

    return 0;
}

int check(int a, int b)
{
    int num, count;

    for (num = a; num <= b; num++)
    {
        count = 0;
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d ", num);
        }
    }

}
