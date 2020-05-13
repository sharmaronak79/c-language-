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
#include<string.h>


int main(void) {
	int i=0,j;
	char temp;
	char x[200];
	printf("enter a string to reverse: ");
	scanf("%s",x);
	j=strlen(x)-1;

	while(i<j){
	temp=x[i];
	x[i]=x[j];
	x[j]=temp;
	i++;
	j--;
	}

	printf("\nreverse of string is : %s",x);

	return 0;
}
