/*
 ============================================================================
 Name        : file_nit.c
 Author      : ronak
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*https://www.youtube.com/watch?v=_KW_YBTXhN0&list=PLVlQHNRLflP8IGz6OXwlV_lgHgc72aXlh&index=54*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE *fp;
	int ch;

	fp= fopen("/home/ronak/name.txt","r");
	if(fp==NULL){
		printf("no such file \n");

	}
	else{
		printf("File is present\n");
	}

	while((ch=fgetc(fp))!=EOF){
		printf("%c",ch);
	}

return 0;
}
