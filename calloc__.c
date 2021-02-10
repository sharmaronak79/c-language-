/*
 ============================================================================
 Name        : calloc_.c
 Author      : ronak-
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*https://www.youtube.com/watch?v=pTXvkLlAm38&list=PLVlQHNRLflP8IGz6OXwlV_lgHgc72aXlh&index=53*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n;
	int *ptr;
	printf("Enter size of array:  ");
	scanf("%d",&n);

	ptr= (int *) calloc(n,sizeof(int));

	if(ptr==NULL){
		printf("No Memory");
	}
	else{
		printf("array elements are: \n");

		for(int i=0;i<n;i++){
			printf("%d\n",*(ptr+i));
		}
	}

return 0;
}
