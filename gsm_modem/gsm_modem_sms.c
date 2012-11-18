#include<16f877a.h>
#use delay(clock=20000000)
#use rs232(baud=9600,xmit=PIN_C6,rcv=PIN_C7

void main()
{
	
while(1)
	{	
		printf("AT+CMGF=1 \r");	
		printf("AT+CMGS=\"+91**********\"\r");
		printf("HAI");
		delay_ms(100);
		putc(26);//ctrl+z
		delay_ms(200);
	}

}
