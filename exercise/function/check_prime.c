/* Write a C program to check a number is prime or not? */

#include <stdio.h>
#include <stdbool.h>

bool check_prime(int n);

int main(void)
{
    int n, i;

    printf("enter n: ");
    scanf("%d", &n);

    if(check_prime (n) == true)
    {
        printf("%d is prime number\n", n);
    }
    else
    {
        printf("%d is not prime number\n", n);
    }

    return 0;
}

bool check_prime(int n)
{
    int i;

    for (i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
