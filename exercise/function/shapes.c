/*Calculate the circumference and area of the circle*/

#include <stdio.h>

float circum(float r);
float area(float r);

#define PI 3.14

int main(void)
{
    float r;

    printf("Enter radius: ");
    scanf("%f", &r);

    printf("Circumference is: %.1f\n", circum(r));
    printf("Area is: %.1f\n", area(r));

    return 0;
}

float circum(float r)
{
    return 2*PI*r;
}

float area(float r)
{
    return PI*r*r;
}
