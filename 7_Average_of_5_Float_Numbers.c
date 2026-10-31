#include <stdio.h>
int main()
{
    float a, b, c, d, e, average;
    printf("Enter five float numbers: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    average = (a + b + c + d + e) / 5;
    printf("Average of the five float numbers: %.2f\n", average);
    return 0;
}