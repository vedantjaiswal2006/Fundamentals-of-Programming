#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,z;
    printf("C Program: Additon of Two Numbers\n");
    printf("--------------------------------\n");
    printf("\nEnter first number: ");
    scanf("%d", &x);
    printf("--------------------------------\n");
    printf("\nEnter second number: ");  
    scanf("%d", &y);
    printf("--------------------------------\n");
    z=x+y;
    printf("Additon of two Numbers= %d\n", z);
    return 0;
}