#include <stdio.h>

#define SET(PIN,N) (PIN |=  (1<<N))
#define CLR(PIN,N) (PIN &= ~(1<<N))
#define TOGGLE(PIN,N) (PIN ^=N)

void bin(unsigned n)
{
    int i;
    for(i=i<<31;i>0;i=i>>1)
        if (n & i)
            printf("1");
        else
            printf("0");
}
int main(){
	
	unsigned char val = 0x11;
	unsigned char bit = 2;
	
	printf("val = %X\n",val);
	
	//set  bit 2 of val
	SET(val,bit);
	printf("Aftre setting  bit %d, val = %X\n", bit, val);

	//clear bit 2 of val
	CLR(val,bit);
	printf("Aftre clearing bit %d, val = %X\n", bit, val);	
	
	return 0;	
}
