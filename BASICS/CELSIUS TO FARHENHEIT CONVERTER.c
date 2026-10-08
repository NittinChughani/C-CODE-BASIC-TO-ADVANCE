#include <stdio.h>
#include <stdlib.h>
int main()
{
float celsius, fahrenheit;
printf("Enter temperature in Celsius: ");
scanf("%f", & celsius);
fahrenheit = celsius * (9.0/5.0) + 32;
printf("Temperature in Fahrenheit: %.2f F\n", fahrenheit);
return 0;
}
