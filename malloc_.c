/*
 ============================================================================
 Name        : malloc.c
 Author      : ronak
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*https://www.youtube.com/watch?v=v49bwqQ4ouM&list=PLVlQHNRLflP8IGz6OXwlV_lgHgc72aXlh&index=50*/

#include <stdio.h>
#include <stdlib.h>

struct emp{
	int eno;
	char ename[20];
	float esal;

};

int main(void) {

struct emp* ptr;
ptr=(struct emp*)malloc(sizeof(struct emp));

if(ptr==NULL)
{
	printf("out of memory");
}
else{
	printf("Enter employee detail: ");
	scanf("%d %s %f ",&ptr->eno,ptr->ename,&ptr->esal);

	printf("%d %s %f ",ptr->eno,ptr->ename,ptr->esal);
}


return 0;
}
