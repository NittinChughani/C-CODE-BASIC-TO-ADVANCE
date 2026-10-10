#include <stdio.h>
#include <stdlib.h>

int circle();
int square();
int rectangle();
int triangle();
int parallelogram();


int main()
{
int option;
printf("\n Area Calculator:");
printf("\n Shapes Available: ");
printf("\n1. Circle\n2. Square\n3. Rectangle\n4. Triangle\n5. Parallelogram\n\n");
printf("\n Enter the corresponding number of that shape: ");
scanf("%d", &option);

switch(option)
{
case 1:
circle();
break;
case 2:
square();
break;
case 3:
rectangle();
break;
case 4:
triangle();
break;
case 5:
parallelogram();
break;
default:
printf("\n Invalid option... \n Please Try Again");
break;
}
}


int circle()
{
float r, A;
printf("\nEnter radius: ");
scanf("%f", &r);
A = (22.0/7.0) * r * r;
printf("\nArea = %.2f", A);
}


int square()
{
float l, A;
printf("\nEnter side: ");
scanf("%f", &l);
A = l * l;
printf("\nArea = %.2f", A);
}


int rectangle()
{
float l, w, A;
printf("\nEnter length: ");
scanf("%f", &l);
printf("\nEnter width: ");
scanf("%f", &w);
A = l * w;
printf("\nArea = %.2f", A);
}


int triangle()
{
float b, h, A;
printf("\nEnter base: ");
scanf("%f", &b);
printf("\nEnter height: ");
scanf("%f", &h);
A = (1.0/2.0) * b * h;
printf("\nArea = %.2f", A);
}


int parallelogram()
{
float b, h, A;
printf("\nEnter base: ");
scanf("%f", &b);
printf("\nEnter height: ");
scanf("%f", &h);
A = b * h;
printf("\nArea = %.2f", A);
}
