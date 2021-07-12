#include<stdio.h>
#include<stdint.h>

union Address{
	uint16_t shortAdrs;
	uint32_t longAdrs;
};

int main(){
	union Address adr;

	adr.shortAdrs = 0x1234;
	adr.longAdrs = 0xABCDEF12;

	printf("short address is : %#X\n",adr.shortAdrs);
	printf("Long address is : %#X",adr.longAdrs);

	while(getchar() != '\n'){
		getchar();
	}
	return 0;
}
