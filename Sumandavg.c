#include <stdio.h>
#include<conio.h>
int main()
{
 int n,i,a[50],sum=0;
 float avg;
    
 printf("\n Enter the number of element : ");
 scanf("%d",&n);
 printf("Enter number\n");
for(i=0;i<n;i++)
{
 printf("\na[%d]= ",i);
 scanf("%d",&a[i]);
 sum=sum+a[i];
}
avg=sum/n;
printf("\nSum=%d\n Average=%f",sum,avg);
getch();
}
