#include <stdio.h>

int main()
{
	int a[5] ={11,22,33,44,55,};
	int x, *p;
	p=a;

	for( x=0; x<5; x++ ){
		printf("%p\n",p+x);
		
	}
	printf("        Hello        \n");
	for( x=0; x<5; x++ ){
		printf("%p\n",&a[x]);
		
	}
	printf("        Hello        \n");
	for( x=0; x<5; x++ ){
		printf("%d\n",*(p+x));
		
	}

	return(0);
}
