/*
 ============================================================================
 Name        : searchelement.c
 Author      : ronak
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, i;
int x[10]={2,5,8,6,2,6,2,7,9,9};
printf("\n array elements are : ");
for(i=0;i<10;i++)
{
	printf("%d " , x[i]);
}

// to read the element which we want to search
printf("\n which element you want to search : ");
scanf("%d ",&n);


//search start from zeroth location
for(i=0;i<=10;i++)
{
if(x[i]==n)
	{printf("element found ");}
else
	{printf("element not found");}
}
return 0;
}


