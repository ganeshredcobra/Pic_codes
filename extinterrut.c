#include <16f877a.h>
#use delay (clock=20000000)
int x;
#int_EXT
EXT_isr() 
{
	
 		x=read_adc(); 
 		output_D(x)	;
 		delay_us(20);
 
 
}

void main()
{   
	//int x;
	enable_interrupts(INT_EXT);
    enable_interrupts(GLOBAL);
	setup_adc_ports(ALL_ANALOG);
	setup_adc(ADC_CLOCK_INTERNAL);
	set_adc_channel(0);
	delay_us(20);
	while(True);	
	
}	