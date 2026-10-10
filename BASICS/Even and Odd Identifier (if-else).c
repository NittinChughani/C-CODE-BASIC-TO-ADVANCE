#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", & num);
    if (num%2==0)
        printf("It's an even number");
    else
        printf("It's an odd number");
    return 0;
}
