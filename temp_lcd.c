#include<16f877a.h>
#use delay(clock=20000000)
#include<pic.h>
#include<lcd.h>

void main()
{   
	float value;
	float temp;
	trisb=0x00;
	lcdinit();
	setup_adc_ports(ALL_ANALOG);
	setup_adc(ADC_CLOCK_INTERNAL);
	set_adc_channel(0);
	delay_us(20);
	while(1)
	{
		value=read_adc();
		delay_ms(500);
		temp=value*1.96;
		if(temp>40)
		{
			go(0);
			printc("Temp is : ");
			print(temp);
			go(64);
			printc("Temp is high");
			delay_ms(500);
			
		}
		else
		{
			go(0);
			printc("Temp is : ");
			print(temp);
			go(64);
			
			printc("Temp is Low     ");
			delay_ms(500);
		}	
	}	
	
}