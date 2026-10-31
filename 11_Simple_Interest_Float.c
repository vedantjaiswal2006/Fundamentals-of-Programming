#include <stdio.h>
int main()
{
    float Principal, Rate, Time, SimpleInterest;
    printf("C Program: Simple Interest\n");
    printf("-------------------------------\n");
    printf("Enter Principal amount: ");
    scanf("%f", &Principal);
    printf("Enter Rate of Interest: ");
    scanf("%f", &Rate);
    printf("Enter Time in years: ");
    scanf("%f", &Time);
    printf("-------------------------------\n");

    SimpleInterest = (Principal * Rate * Time) / 100;
    printf("Simple Interest: %.2f\n", SimpleInterest);
    return 0;
}