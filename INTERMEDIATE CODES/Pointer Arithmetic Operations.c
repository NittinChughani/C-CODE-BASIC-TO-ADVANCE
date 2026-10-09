#include <stdio.h>

int main()
{
    int a, b;
    int *ptr1, *ptr2;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    ptr1 = &a;
    ptr2 = &b;

    printf("\nFirst number: %d", *ptr1);
    printf("\nSecond number: %d", *ptr2);
    printf("\n");
    printf("\nAddition: %d", *ptr1 + *ptr2);
    printf("\nSubtraction: %d", *ptr1 - *ptr2);
    printf("\nMultiplication: %d", *ptr1 * *ptr2);

    if (*ptr2 != 0)
    {
        printf("\nDivision: %.2f", (float)*ptr1 / *ptr2);
    }
    else
    {
        printf("\nDivision is not possible.");
    }

    return 0;
}
