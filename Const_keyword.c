/*
 * main.c
 *
 *  Created on: Jul 1, 2021
 *      Author: HP
 */
#include<stdio.h>
#include<stdint.h>

int main(){

	uint8_t const data = 10;
	printf("data = %u",data);

	uint8_t *ptr = (uint8_t*) &data;
	*ptr = 50;


	printf("\ndata = %u",data);
	return 0;
}

