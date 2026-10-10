#include <stdio.h>

int main()
{
    int choice;
    float num1, num2;

    do
    {
        printf("\n\n===== CALCULATOR MENU =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4)
        {
            printf("Enter first number: ");
            scanf("%f", &num1);

            printf("Enter second number: ");
            scanf("%f", &num2);
        }

        switch (choice)
        {
            case 1:
                printf("Result = %.2f", num1 + num2);
                break;

            case 2:
                printf("Result = %.2f", num1 - num2);
                break;

            case 3:
                printf("Result = %.2f", num1 * num2);
                break;

            case 4:
                if (num2 != 0)
                    printf("Result = %.2f", num1 / num2);
                else
                    printf("Division by zero is not allowed.");
                break;

            case 5:
                printf("Calculator closed.");
                break;

            default:
                printf("Invalid choice. Try again.");
        }

    } while (choice != 5);

    return 0;
}
