#include <stdio.h>
int main()
{
    int Celsius, Fahrenheit;
    printf("C Program: Celsius to Fahrenheit\n");
    printf("-------------------------------\n");    
    printf("Enter temperature in Celsius: ");
    scanf("%d", &Celsius);
    printf("-------------------------------\n");
     
    Fahrenheit = (Celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit: %d\n", Fahrenheit);
    return 0;
}
