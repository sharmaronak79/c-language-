/*
 ============================================================================
 Name        : typedef_nit.c
 Author      : ronak
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*https://www.youtube.com/watch?v=3_9_Vfdsq0s&list=PLVlQHNRLflP8IGz6OXwlV_lgHgc72aXlh&index=56*/
#include <stdio.h>
#include <stdlib.h>
char* getname(void);
int main() {

	char* name;
	name = getname();
	printf("welcome %s",name);
return 0;
}

char* getname(void){
	char *name=malloc(sizeof(char));  // without initialized base address it will give error
	printf("Enter your name : ");
	scanf("%[^\n]",name); // we can use %s also but it will not accept after space

	return name;
}
