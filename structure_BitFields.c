#include<stdio.h>
#include<stdint.h>

struct Packet{           // BitField this will occupy given bits for that variable
	                     //this is used to minimize the memory

	uint32_t crc		:2;
	uint32_t status		:1;
	uint32_t payload	:12;
	uint32_t bat		:3;
	uint32_t sensor		:3;
	uint32_t longAdr	:8;
	uint32_t shortAdr	:2;
	uint32_t addrMode	:1;
};

int main(){
	struct Packet packet;

	uint32_t packetvalue;
	printf("Enter the 32 bit packet value : \n");
	scanf("%x",&packetvalue);

	packet.crc = (uint8_t)(packetvalue & 0x3);
	packet.status = (uint8_t)((packetvalue >> 2)& 0x1);
	packet.payload = (uint16_t)((packetvalue >> 3)&0xFFF);
	packet.bat =(uint8_t)((packetvalue >> 15)& 0x7);
	packet.sensor = (uint8_t)((packetvalue >> 18) & 0x7);
	packet.longAdr = (uint8_t)((packetvalue>>21) & 0xFF);
	packet.shortAdr = (uint8_t)((packetvalue >>29) & 0x3);
	packet.addrMode = (uint8_t)((packetvalue >> 31) & 0x1);

	printf("crc			  :%#x \n",packet.crc);
	printf("status		:%#x \n",packet.status);
	printf("payload		:%#x \n",packet.payload);
	printf("bat			  :%#x \n",packet.bat);
	printf("sensor		:%#x \n",packet.sensor);
	printf("longAdr		:%#x \n",packet.longAdr);
	printf("shortAdr	:%#x \n",packet.shortAdr);
	printf("addrmode	:%#x \n",packet.addrMode);

	printf("Total size of struct is : %d",sizeof(packet));

	while(getchar() != '\n'){

			}
			getchar();
	return 0;
}
