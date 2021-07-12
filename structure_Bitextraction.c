#include<stdio.h>
#include<stdint.h>

struct Packet{

	uint8_t crc;
	uint8_t status;
	uint16_t payload;
	uint8_t bat;
	uint8_t sensor;
	uint8_t longAdr;
	uint8_t shortAdr;
	uint8_t addrMode;
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

	printf("crc			:%#x \n",packet.crc);
	printf("status		:%#x \n",packet.status);
	printf("payload		:%#x \n",packet.payload);
	printf("bat			:%#x \n",packet.bat);
	printf("sensor		:%#x \n",packet.sensor);
	printf("longAdr		:%#x \n",packet.longAdr);
	printf("shortAdr	:%#x \n",packet.shortAdr);
	printf("addrmode	:%#x \n",packet.addrMode);

	while(getchar() != '\n'){

			}
			getchar();
	return 0;
}
