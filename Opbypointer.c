#include <stdio.h>
#include<conio.h>
int main()
{
   int no1, no2, *pt1, *pt2, sum;
   
  
   printf(" Input the  number  1: ");
   scanf("%d", &no1);
   printf(" Input the number 2: ");
   scanf("%d", &no2);   
 
   pt1 = &no1;
   pt2 = &no2;
 
   sum = *pt1 + *pt2;
 
   printf(" The Sum of the entered nmbers is : %d\n\n",sum);
 
   getch();
}
