include <stdio.h>
#include<conio.h>
int main()
{
	int n,rem,a,b;
	char op;
    
    printf("Enter  Operator(+,-,*,/)");
	scanf("%c",&op);
    printf("Enter first numbers :");
	scanf("%d",&a);
	printf("Enter second numbers :");
	scanf("%d",&b);
	
	switch(op)
	{
	case '+' : printf("Result : %d ",a+b);break;
	case '-' : printf("Result : %d ",a-b);break;
	case '*' : printf("Result : %d ",a*b);break;
	case '/' : printf("Result : %d ",a/b);break;
	default  : printf("Invalid operator ");
	}
