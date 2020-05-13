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

void lwr(char *);

void upr(char *);

int main(void) {

	char x[200];

	printf("enter string to convrt lower case :");

	scanf("%[^\n]s",x);//read string with spaces

	lwr(x);
	upr(x);

	return 0;
}

void lwr(char *x){
	int i=0;
	while(x[i]!='\0'){
			if(x[i]>='A' && x[i]<='Z'){
				x[i]=x[i]+32;
			}
			i++;
		}
	printf("\n string in lower case is  : %s",x);

}


void upr(char *x){
	int i=0;
	while(x[i]!='\0'){
			if(x[i]>='a' && x[i]<='z'){
				x[i]=x[i]-32;
			}
			i++;
		}
	printf("\n string in uper case is  : %s",x);

}
