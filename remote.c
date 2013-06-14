#include<16f877a.h>
#include<pic.h>
void main()
{	int i,x=0;
trisd=trise=trisb=trisa=0x00;
	trisc=0xff;
while(1)
{	
	
	if(rc0)
	{
		if(x)
		
		{
			x=!x;
			portb=0x00;
			delay_ms(300);
		}
		else
		{	x=!x;
			portb=0xff;
			delay_ms(300);
		}
	}
}
}	
	