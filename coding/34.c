#include<stdio.h>
int main ()
{
    float fahrenheit,celsius;

    printf("Enter temperature in C: ");
    scanf("%f", &celsius);
    
    fahrenheit = ((celsius * 9/5) + 32);
    
    printf("Temperature in centigrade  = %f \n",  fahrenheit);
    return 0;
}