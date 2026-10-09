#include <stdio.h>

int main()
{
    int arr[5];
    int i;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal Array: ");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nReversed Array: ");

    for (i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
