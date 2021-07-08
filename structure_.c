#include<stdio.h>
#include<stdint.h>

struct carModel{
	int carYear;
	uint32_t carNumber;
	uint8_t carSpeed;
	float carPrice;

};

int main(){

	struct carModel Honda={2020,0754,220,20.17};
	uint32_t *ptr = (uint32_t*)&Honda;
	printf("Addrss of Honda variable is : %p\n",ptr);
	printf("Addrss of ptr variable is : %p\n",&ptr);
	printf("sizeof structure is : %d",sizeof(Honda));
	printf("All address of member elements are : \n");
	printf("=====================================\n");
	printf("Element ");
	return 0;

}
