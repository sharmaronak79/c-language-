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

struct employee{
	int id;
	char name[30];
	float sal;
};

int main(void) {
	int n,i;
	printf("entwr number of employees : ");
	scanf("%d",&n);

	struct employee e[n];

	for(i=0;i<n;i++){
	printf("enter id of %d employee: ",i+1);
	scanf("%d",&e[i].id);
	printf("\nenter name of %d employee : ",i+1);
	scanf("%s",e[i].name);
	printf("\nenter salary of %d employee : ", i+1);
	scanf("%f",&e[i].sal);
	}


	printf("\n Employee details is: \n");
	printf("\nID \t NAME \t SALARY \n");

	for(i=0;i<n;i++){
	printf("\n%d \t %s \t %f",e[i].id,e[i].name,e[i].sal);
	}

	return 0;
}

