/*
 ============================================================================
 Name        : c.c
 Author      : ronak
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>SE
#include <stdlib.h>
#include<string.h>

int main() {

	int i, l1, l2;
	char s1[100],s2[100];
	printf("\nenter the first string : ");
	scanf("%s",s1);
	printf("\nenter the cond string : ");
	scanf("%s",s2);
	l1= strlen(s1);
	l2=strlen(s2);

	for(i=0;i<=l2;i++){
		s1[l1+i]=s2[i];
	}

	printf("\n after concanate strinfg is: %s ",s1);


	return 0;
}
      
