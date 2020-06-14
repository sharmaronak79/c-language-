/*
 ============================================================================
 Name        : filecopy_nit.c
 Author      : ronak 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>



int main(void) {

	FILE *fp1 ,*fp2;
	int ch;

	fp1=fopen("/home/ronak/name.txt","r");
	fp2=fopen("/home/ronak/name_new.txt","w");
	if(fp1==NULL){
			printf("no such file \n");

		}
	while((ch = fgetc(fp1))!=EOF){
		fputc(ch,fp2);
	}
	printf("file is copied\n");
	
	fp2=fopen("/home/ronak/name.txt","r");
	
	while((ch = fgetc(fp2))!=EOF){
			printf("%c",ch);
			//delay(1000);
		}
	return 0;
}
