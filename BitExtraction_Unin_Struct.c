#include<stdio.h>
#include<stdint.h>

union Packet{
	uint32_t packetvalue;
	struct {

		uint32_t crc		:2;
		uint32_t status		:1;
		uint32_t payload	:12;
		uint32_t bat		:3;
		uint32_t sensor		:3;
		uint32_t longAdr	:8;
		uint32_t shortAdr	:2;
		uint32_t addrMode	:1;
	}packetfield;
};

int main(){

	union Packet packet;
	printf("Enter the vslue of PacketValue : \n");
	scanf("%x",&packet.packetvalue);

	printf("crc		:%#x \n",packet.packetfield.crc);
	printf("status		:%#x \n",packet.packetfield.status);
	printf("payload		:%#x \n",packet.packetfield.payload);
	printf("bat		:%#x \n",packet.packetfield.bat);
	printf("sensor		:%#x \n",packet.packetfield.sensor);
	printf("longAdr		:%#x \n",packet.packetfield.longAdr);
	printf("shortAdr	:%#x \n",packet.packetfield.shortAdr);
	printf("addrmode	:%#x \n",packet.packetfield.addrMode);

	printf(" Total size of union is : %d",sizeof(packet));

	return 0;
}

