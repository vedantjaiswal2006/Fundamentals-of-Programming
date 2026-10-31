#include <stdio.h>
int main()
{
    float Celsius, Fahrenheit;
    printf("C Program: Celsius to Fahrenheit Conversion\n");
    printf("Enter temperature in Celsius: ");
    scanf("%f", &Celsius);
    Fahrenheit = (Celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", Fahrenheit);
    return 0;
}   