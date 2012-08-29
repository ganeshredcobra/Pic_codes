#include <16f877a.h>
#use delay(clock=20000000)


void main()
{
 	int x;
	setup_adc_ports(ALL_ANALOG);
	setup_adc(ADC_CLOCK_INTERNAL);
	set_adc_channel(0);
	delay_us(20);
	while(True)	
	{
		x=read_adc();
	
		output_B(255)	;
		delay_us(x);
		output_B(0)	;
		delay_us(x);
		}
		
	}	