#include< stdio.h>
#include< conio.h>
int main()
{
	int num; 	/*to store number*/
	int i;	/*loop counter*/
	
	/*Reading the number*/
	printf("Enter an integer number: ");
	scanf("%d",&num);
	
	/*Initialising loop counter*/
	i=1;
	
	/*loop from 1 to 10*/
	while(i<=10){
		printf("%d * %d = %d\n ",num,i,(num*i));
		i++; /*Increase loop counter*/
	}
	
getch();
} 
