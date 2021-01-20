#include< stdio.h>
#include< conio.h>
int main()
{
  int i=1,n;
  printf("Enter N  : ");
  scanf("%d",&n);
  while(i<=n)
  {
	   printf("%d\n",i);
	   i=i+2; 
	   // increment i by 2
  }
  return 0;
}
