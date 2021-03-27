
#include <stdio.h>
#include<conio.h>
int main()
{
 
 int j,k,s=0;
 int x[5]={5,2,4,3,9};

   printf("\n Array 1 Elements are:");
   for (k = 0; k<5; k++) {
               printf("%d ",x[k]);
               s=s+x[j];
 
   }
    printf("\n Sorted array are :");
   for (k = 0; k<s; k++) {
        for (j= 0; j<5; j++) {
             if(x[j] ==k)
             printf("%d",x[j]);
                 }
   }           

    getch();


}
