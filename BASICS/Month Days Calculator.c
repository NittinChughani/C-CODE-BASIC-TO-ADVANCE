#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int main()
{

int month, year;

bool leapyear = false;

printf("Enter The Month Number(1-12): ");
scanf("%d", & month);
printf("Enter Your Year: ");
scanf("%d", & year);

if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
{
leapyear = true;
printf("This is a leap year. So, ");
}
switch(month)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12: printf("Days in month %d are 31.\n", month);
break;

case 2:
{
if(leapyear)
printf("Days in month %d are 29.\n", month);
else
printf("Days in month %d are 28.\n", month);
}
break;

case 4:
case 6:
case 9:
case 11:
printf("month %d has 30 :)" , month);
break;

default:
printf("Invalid month number %d, Enter the number between 1-12" , month);
}
return 0;
}
