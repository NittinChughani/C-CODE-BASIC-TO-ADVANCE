#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int sum, difference, product;
    float division;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    division = (float)num1 / num2;

    printf("\nSum = %d", sum);
    printf("\nDifference = %d", difference);
    printf("\nProduct = %d", product);
    printf("\nDivision = %.2f", division);

    return 0;
}
