#include <stdio.h>
#include<conio.h> 
int main()
{
int wDay;

printf("Enter weekday any number from 0 to 6 only: ");
scanf("%d",&wDay);

switch(wDay)
{
case 0: 
	printf("Sunday");
	break;
case 1: 
	printf("Monday");
	break;
case 2: 
	printf("Tuesday");
	break;
case 3: 
	printf("Wednesday");
	break;
case 4: 
	printf("Thursday");
	break;
case 5: 
	printf("Friday");
	break;
case 6: 
	printf("Saturday");
	break;
default:
	printf("Please enter any one number form 0 to 6");
}
printf("\n");
getch();
}
