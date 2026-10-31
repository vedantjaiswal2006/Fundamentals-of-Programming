#include <stdio.h>
int main()
{
    int Principal, Rate, Time,SimpleInterest;
    printf("C Program: Simple Interest\n");
    printf("-------------------------------\n");
    printf("Enter Principal amount: ");
    scanf("%d", &Principal);
    printf("Enter Rate of Interest: ");
    scanf("%d", &Rate);
    printf("Enter Time in years: ");
    scanf("%d", &Time);
    printf("-------------------------------\n");

    SimpleInterest = (Principal*Rate*Time)/100;
    printf("Simple Interest: %d\n", SimpleInterest);
    return 0;
}