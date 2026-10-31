#include <stdio.h>
int main()
{
    int x,y;
    printf("C Program: Additon of two Numbers\n");
    printf("--------------------------------\n");
    printf("\nEnter first number: ");
    scanf("%d", &x);
    printf("\nEnter second number: ");
    scanf("%d", &y);
    printf("--------------------------------\n");
    printf("Additon of two Numbers= %d\n", x+y);
    printf("--------------------------------\n");
    printf("Subtraction of two Numbers= %d\n", x-y);
    printf("--------------------------------\n");
    printf("Multiplication of two Numbers= %d\n", x*y);
    printf("--------------------------------\n");
    printf("Division_Quotient= %d\n", x/y);
    printf("--------------------------------\n");
    printf("Division_Remainder= %d\n", x%y);
    printf("--------------------------------\n");
    printf("PreIncrement= %d\n", ++x);
    printf("PreIncrement= %d\n", x);
    printf("--------------------------------\n");
    printf("PostIncrement= %d\n", x++);
    printf("PostIncrement= %d\n", x);
    printf("--------------------------------\n");
    printf("PreDecrement= %d\n", --x);
    printf("PreDecrement= %d\n", x);
    printf("--------------------------------\n");
    printf("PostDecrement= %d\n", x--);
    printf("PostDecrement= %d\n", x);
    printf("--------------------------------\n");
    printf("Unary Plus= %d\n", +x);
    printf("--------------------------------\n");
    printf("Unary Minus= %d\n", -x);
    printf("--------------------------------\n");
    return 0;   
}