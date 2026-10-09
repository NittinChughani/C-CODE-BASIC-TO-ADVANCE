#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[100];
    char copiedName[100];
    char secondName[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    printf("Enter another name: ");
    fgets(secondName, sizeof(secondName), stdin);

    secondName[strcspn(secondName, "\n")] = '\0';

    printf("\nOriginal Name: %s", name);
    printf("\nLength of Name: %d", (int)strlen(name));

    strcpy(copiedName, name);

    for (i = 0; copiedName[i] != '\0'; i++)
    {
        copiedName[i] = toupper((unsigned char)copiedName[i]);
    }

    printf("\nUppercase Name: %s", copiedName);

    if (strcmp(name, secondName) == 0)
    {
        printf("\nBoth names are the same.");
    }
    else
    {
        printf("\nBoth names are different.");
    }

    return 0;
}
