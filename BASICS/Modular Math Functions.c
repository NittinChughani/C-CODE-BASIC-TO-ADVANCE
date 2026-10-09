#include <stdio.h>
#include <math.h>

float calculateAverage(float x, float y) {
    return (x + y) / 2;
}

unsigned long long factorial(float n) {
    int num = (int)n;
    if (num < 0) {
        return 0;
    }
    if (num == 0 || num == 1) {
        return 1;
    }

    unsigned long long result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}

float calculateF(float x, float y) {
    return sqrt(x*x + y*y);
}

int main() {
    float num1, num2;
    float avg, f_result;
    unsigned long long fact1, fact2;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    avg = calculateAverage(num1, num2);
    fact1 = factorial(num1);
    fact2 = factorial(num2);
    f_result = calculateF(num1, num2);

    printf("\n=== RESULTS ===\n");
    printf("Numbers entered: %.2f and %.2f\n", num1, num2);
    printf("Average: %.2f\n", avg);
    printf("Factorial of %.2f: %llu\n", num1, fact1);
    printf("Factorial of %.2f: %llu\n", num2, fact2);
    printf("f(%.2f, %.2f) = sqrt(%.2f^2 + %.2f^2) = %.2f\n",
           num1, num2, num1, num2, f_result);

    return 0;
}
