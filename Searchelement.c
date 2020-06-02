include <stdio.h>
#include<conio.h>
int main()
{
 int n,i;
 int x[10]={2,2,3,4,2,5,6,7,8,9};
  
   printf("\n Array elements are:");
   for (i = 0; i <= 9; i++) {
               printf("Enter element %d: ",x[i]);
 
   }
 
   //Read the element to be searched
   printf("\nEnter the elements to be searched :");
   scanf("%d", &n);
 
   //Search starts from the zeroth location
   for (i = 0; i <= 10; i++) {
              if(x[i]==n)
			  printf("\n Element Found");
			  else
			  printf("\n Element not fount");
 
   }
 getch();

}
