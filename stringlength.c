/*
 ============================================================================
 Name        : string_new.c
 Author      : ronak
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int stringlength(char []);

int main() {
	char str[30];
	int len;
	printf("Enter string : ");
	gets(str);

	len= stringlength(str);
	printf("Lenghth of string : %d\n",len);
	return 0;
}

int stringlength(char x[]){
	int i=0 , count=0;
	while(x[i]!='\0'){
		count++;
		i++;

	}
	return count;
}
