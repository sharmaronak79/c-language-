//When we use __attribute__((packed)) after declaration of structure , then structue padding can be avoided 
// So, we can get the actual size of the structure , without that we can lost some memory unused 

#include<stdio.h>
#include<stdint.h>

struct carModel{
	int carYear;
	uint32_t carNumber;
	uint8_t carSpeed;
	float carPrice;

}__attribute__((packed));

int main(){

	struct carModel Honda={2020,0754,220,20.17};
	//uint32_t *ptr = (uint32_t*)&Honda;
	printf("Sizeof struct variable is : %d ",sizeof(Honda));
	return 0;

}
