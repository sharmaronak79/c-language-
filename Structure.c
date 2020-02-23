#include <stdio.h>
#include<conio.h>
int  main()
{
  struct  employee
  {
    char  name[21] ;
    int  id ;
    float  salary ;
  } ;
  struct  employee  e[10] , temp ;
  int i , j , n ;

  
  printf("Enter the number of employees: ") ;
  scanf("%d" , &n)  ;

  printf("Enter employee name , id and salary of all employees: \n") ;
  for(i=0 ; i<n ; i++)
    scanf("%s %d %f" , e[i].name , &e[i].id , &e[i].salary) ;
  
  for(i=0 ; i<n-1 ; i++)
    for(j=0 ; j<n-1-i ;j++)
       if(e[j].id > e[j+1].id)
       {      
		   	temp=e[j];
       		e[j]=e[j+1];
       		e[j+1]=temp;
       }

  printf("\nIn ascending order : employee id is as below:\n") ;
  for(i=0 ; i<n ; i++)
      printf("%s  %d %f \n" , e[i].name , e[i].id , e[i].salary) ;

  return 0;;
}
