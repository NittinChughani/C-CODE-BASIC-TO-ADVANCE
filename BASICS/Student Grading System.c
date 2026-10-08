#include <stdio.h>

int main()
{
    char name[50];
    int age = 0;
    float totalMarks = 0;
    float obtainedMarks = 0;
    float percentage = 0;
    char grade;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter total marks: ");
    scanf("%f", &totalMarks);

    printf("Enter obtained marks: ");
    scanf("%f", &obtainedMarks);

    percentage = (obtainedMarks / totalMarks) * 100;

    if (percentage >= 80)
        grade = 'A';
    else if (percentage >= 70)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 50)
        grade = 'D';
    else
        grade = 'F';

    printf("\n--- Student Information ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Obtained Marks: %.2f\n", obtainedMarks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
