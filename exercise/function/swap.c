/* write a program to swap 2 numbers by using pointer */

#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    int a, b;

    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);

    swap(&a, &b);

    printf("value of a = %d\n", a);
    printf("value of b = %d\n", b);

    return 0;
}

void swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;

}