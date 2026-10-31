#include<stdio.h>
int square(int x)
{
    return x*x;
}
int main()
{
    int result;
    result = square (6);
    printf("square = %d",result);
    return 0;
}