#include< stdio.h>
#include< conio.h>
int main()
{
  int i=2,n;
  printf("Enter_n : ");
  scanf("%d",&n);
  while(i<=n)
  {
	   printf("%d\n",i);
	   i=i+2; 
	   //increment i by 2
  }
  return 0;
}
