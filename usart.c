#include<16f877a.h>
#include<string.h>
#use delay(clock=20000000)
#use rs232(baud=9600,xmit=PIN_C6,rcv=PIN_C7)

void main()
{
	char value[10];
	char pass[5]="test";
	int i;
	while(1)
	{
	printf("Enter Password");
	for(i=0;i<8;i++)
	{
		value[i]=getch();
	}	
	if(!strcmp(value,pass))
	{
		printf("Correct password");
	}	
	else
	{
		printf("Wrong password");
	}	
	delay_us(50);
}	
}
