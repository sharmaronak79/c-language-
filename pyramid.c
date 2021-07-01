/*
 * mian.c
 *
 *  Created on: Jul 1, 2021
 *      Author: HP
 */


#include<stdio.h>
#include<stdint.h>

int main(){

	uint32_t i,height,j;
	printf("Here is the pyramid :\n Enter the height : ");
	scanf("%d",&height);

	for(i=1;i<=height;i++){
		for(j=i;j>0;j--){
			printf("%d\t",j);
		}
		printf("\n");
	}
	printf("\nHit Enter to Exit the programe ");
	while(getchar() != '\n'){

	}
	getchar();
	return 0;
}
