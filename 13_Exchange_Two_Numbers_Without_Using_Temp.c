#include <stdio.h>
int main()
{ 
    int num1,num2;
    printf("C Program: Exchange two Numbers\n");
    printf("--------------------------------\n");
    printf("\nEnter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("--------------------------------\n");
    printf("After Exchanging, first number:  %d\n",num1);
    printf("--------------------------------\n");
    printf("After Exchanging, second number: %d\n",num2);
    return 0;
}