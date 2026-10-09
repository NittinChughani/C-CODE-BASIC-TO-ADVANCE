#include <stdio.h>

void changeValue(int x)
{
    x = x + 10;
    printf("Value inside call by value function: %d\n", x);
}

void changeReference(int *x)
{
    *x = *x + 10;
    printf("Value inside call by reference function: %d\n", *x);
}

void swapValues(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1;
    int num2 = 20;
    printf("Enter number 1: ");
    scanf("%d",&num1);

    printf("Original num1: %d\n", num1);

    changeValue(num1);

    printf("After call by value: %d\n", num1);

    changeReference(&num1);

    printf("After call by reference: %d\n", num1);

    printf("\nBefore swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    swapValues(&num1, &num2);

    printf("\nAfter swapping:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}
