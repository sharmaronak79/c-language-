#include <stdio.h>
#include<conio.h>
int main()
{
 int i,h=0,k=0;
 int x[5]={1,2,3,6,5};
 int y[5]={6,7,18,9,10};
 int z[10];
   printf("\n Array  1 elements are: ");
   for (i = 0; i<5; i++) {
               printf(" %d ",x[i]);
 
   }
   
   printf("\n Array 2  Elements are:");
   for (i = 0; i<5; i++) {
               printf("%d ",y[i]);
 
   }
 
   i=0;
   while(i<10){
              if(i%2 ==0 )
              z[i] =x[k++];
              else
              z[i]=y[h++];
              i++;
              }
              
               printf("\n Merged elements are :");
   for (i = 0; i<10; i++) {
               printf("%d",z[i]);
 
   }            

    getch();


}
