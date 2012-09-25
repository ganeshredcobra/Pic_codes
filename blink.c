#include<16f877a.h>
#use delay(clock=20000000)
void main()
{	
	int x;
	while(True)
	{
		x=input(pin_B1);
		if(x)
			{
				output_low(pin_B2);
				output_high(pin_B0);
				delay_us(50);
				output_low(pin_B0);
				delay_us(50);
			}
			else
			{
				output_high(pin_B2);
			}		
	}	

}
