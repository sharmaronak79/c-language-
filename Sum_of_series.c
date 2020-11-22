C program to find sum of all natural numbers. Series: 1+2+3+4+..N

SOLUTION:

#include <stdio.h>
#include<conio.h>
int main()
{
int i,N,sum;
 
/*read value of N*/
printf("Enter the value of N: ");
scanf("%d",&N);
 
/*set sum by 0*/
sum=0;
 
/*calculate sum of the series*/
for(i=1;i<=N;i++)
{
	sum= sum+ i;
  printf("%d + ",i);
  }
/*print the sum*/
 
printf(" : %d",sum);
 
getch();
}
