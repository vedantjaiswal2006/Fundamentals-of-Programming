#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,z1,z2,z3,z4,z5;
    printf("C Program: Additon of two Numbers\n");
    printf("--------------------------------\n");
    printf("\nEnter first number: ");
    scanf("%d", &x);
    printf("---------------------------------\n");
    printf("\nEnter second number: ");
    scanf("%d", &y);
    printf("---------------------------------\n");
    z1=x+y;
    printf("Additon of two Numbers= %d\n", z1);
    z2=x-y;
    printf("Subtraction of two Numbers= %d\n", z2);
    z3=x*y;
    printf("Multiplication of two Numbers= %d\n", z3);
    z4=x/y;
    printf("Division_Quotient= %d\n", z4);
    z5=x%y;
    printf("Division_Remainder= %d\n", z5);
    printf("---------------------------------\n");
    return 0;
}