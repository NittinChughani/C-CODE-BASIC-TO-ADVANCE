#include <stdio.h>

double fibonacci(int n);

int main()

{
int n;
printf("Enter Fibonacci position: ");
if (scanf("%d",& n) != 1 || n<0 ){
    printf("Error: Enter a valid non negative number");
return 1;
}

double result = fibonacci(n);
printf("Fibonacci number is : %.2f",result);
return 0;

}
double fibonacci (int n){
if (n<=1) {
    return n;
}
return fibonacci(n-1)+fibonacci(n-2);
}
