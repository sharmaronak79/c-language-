
#include<stdio.h>
#include<stdint.h>

struct Data{
	char a;
	int b;
	char c;
	short d;
};
void displayMemberElement(struct Data *pdata);

int main(){

	struct Data data;
	data.a= 0x11;
	data.b= 0xFFFFEEEE;
	data.c=0x22;
	data.d=0xABCD;


	displayMemberElement(&data);

	return 0;
}

void displayMemberElement(struct Data *pdata){
	printf("value of first member element is : %X\n",pdata->a);
	printf("value of second member element is : %X\n",pdata->b);
	printf("value of third member element is : %X\n",pdata->c);
	printf("value of forth member element is : %X\n",pdata->d);
}

