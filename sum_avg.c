/*
 ============================================================================
 Name        : sum_avg.c
 Author      : ronak
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int arr[50], i,j,n;
	int num, countdel=0;

	printf("enter total number of element :");
	scanf("%d",&n);

	printf("enter element and press enter after each element : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	printf("now your array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}

printf("enter number which u want to delet ");
scanf("%d",&num);


	for(i=0;i<n;i++)
	{
		if(arr[i]==num)
		{countdel++;
		for(j=i;j<n;j++)
		{arr[j]=arr[j+1];};
		}

	}


	if(countdel)
		printf("%d found %d times and deleted succesfully", num,countdel);
	else
		printf("\n array elements after deleting %d",num);

	printf("\n array after deleting elements %d. \n",num);
	for(i=0;i<(n-countdel);i++)
	{printf("%d\n",arr[i]);}
return 0;
}
