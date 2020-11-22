#include <stdio.h>
#include<conio.h>
int main()
{
  int  i , n ;

  printf("Enter n:") ;
  scanf("%d" , &n) ;

  printf("Required Output:\n") ;
  printf("x=1!") ;
  for(i=3 ; i<=2*n-1 ; i=i+2)
    printf("+%d!" , i) ;

  getch() ;
}
