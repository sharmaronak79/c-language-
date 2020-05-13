/*
 ============================================================================
 Name        : xyz.c
 Author      : ronak
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int stringlength(char[]);

int main(void) {

	char str[100];
	int len;
	char a[]="new array";
	printf("enter string : ");
	scanf("%s",str);
	len=stringlength(str);
	printf("string of A aray is : %s",a);
	printf("\nlength of string is : %d",len);
	return 0;
}

int stringlength(char x[])
{
	int i=0, count=0;
	while(x[i]!='\0'){
		count++;
		i++;
	}
	return count;
}
