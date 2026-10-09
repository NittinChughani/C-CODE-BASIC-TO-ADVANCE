#include <stdio.h>
#include <math.h>

double f1(int n);
double f2(int n);

int main()
{
    int n;
    double result_f1, result_f2, y;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    result_f1 = f1(n);
    result_f2 = f2(n);

    y = result_f1 + result_f2;

    printf("\n=== RESULTS ===\n");
    printf("f1(%d) = %.6f\n", n, result_f1);
    printf("f2(%d) = %.6f\n", n, result_f2);
    printf("y = f1(%d) + f2(%d) = %.6f\n", n, n, y);

    return 0;
}

double f1(int n) {

    double numerator = pow(-1, n);
    double denominator = 1.0;
    int i;

    for(i = 1; i <= (n + 1); i++) {
        denominator *= i;
    }

    return numerator / denominator;
}

double f2(int n) {
    double sum = 0.0;
    int i;

    for(i = 1; i <= 6; i++) {
        sum += 2 * n * i;
    }

    return sum;
}
