#include<stdio.h>
#include<stdint.h>

struct DataSet{
	char data1;
	 int data2;
	char data3;
	short data4;

};

int main(){

	struct DataSet Data;
	Data.data1 = 0x11;
	Data.data2 = 0xFFFFEEEE;
	Data.data3 = 0x22;
	Data.data4 = 0xABCD;
	printf("Sizeof struct variable is : %d \n",sizeof(Data));
	printf("======================================\n");
	printf("Address             =       Value \n");


	uint8_t *ptr = (uint8_t*)&Data;
	for(int i=0;i<sizeof(Data);i++){
		printf("%p              =   %X\n",ptr, *ptr);
		ptr++;

	}
	return 0;

}
