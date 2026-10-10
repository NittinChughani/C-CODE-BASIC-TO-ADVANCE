#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,count;
    printf("Enter the number: ");
    scanf("%d",& n );
    int pro=1,i,sum=0;
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
    {
    for(i=1; i<=n;i++){
        pro=pro*i;
    }
    printf("The number is a Prime \n");
    printf("The Factorial of %d is %d",n,pro);
    }
    else
    {
        printf("The number is Not Prime\n ");
        for(i=1;i<=n;i++){
        sum=sum+i;}
        printf("The sum of numbers from 1 to %d is %d",n,sum);

    }
    return 0;
}

