/*
 ============================================================================
 Name        : upper_lower.c
 Author      : ronak
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*All characters have their ASCI code ,
 * depending on that this programme work */

#include <stdio.h>
#include <stdlib.h>

int main() {

	int i=0;
	char s[100];
	printf("Enter a string to convrt in lower case: ");
	scanf("%s",s);

	while(s[i]!='\0'){
		if(s[i]>='A' && s[i]<='Z'){
			s[i]=s[i]+32;
		}
		i++;
	}
	printf("new string is : %s",s);
	return 0;
}
