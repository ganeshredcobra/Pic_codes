/*Green house code*/
#include<16f877a.h>
#use delay(clock=20000000)
#include<pic.h>
#include<lcd.h>

void main()
{   
	float val_temp,val_humd,val_ligh=0;//variables for storing values of tem,humidity and ldr..
	float x,y,z=0;
	trisb=0x00;
	lcdinit();
	setup_adc_ports(ALL_ANALOG);
	setup_adc(ADC_CLOCK_INTERNAL);
	delay_us(20);
	float tmp()//Function for reading temperature
		{
			set_adc_channel(0);//Connected to RA0
			delay_us(20);			
			val_temp=read_adc();
			return val_temp*1.96;
		}
	float hum()//Function for reading humidity
		{
			set_adc_channel(1);//Connected to RA1
			delay_us(20);			
			val_humd=read_adc();
			return val_humd;
		}
	float ligh()//Function for reading light
		{
			set_adc_channel(1);//Connected to RA2
			delay_us(20);			
			val_ligh=read_adc();
			return val_ligh;
		}
	while(1)
	{
		x=tmp();//Intializing temperature function
		if(x>40)
			{
				go(0);
				printc("Temp is : ");
				print(x);
				go(64);
				printc("Temp is high");
				delay_ms(500);
			}
		else
			{
				go(0);
				printc("Temp is : ");
				print(x);
				go(64);
				printc("Temp is Low     ");
				delay_ms(500);
			}	
		y=hum();//Intializing hUMIDITY function
		if(y>40)
			{
				go(0);
				printc("Humid is : ");
				print(y);
				go(64);
				printc("Humd is high");
				delay_ms(500);
			}
		else
			{
				go(0);
				printc("Humd is : ");
				print(y);
				go(64);

				printc("Humd is Low     ");
				delay_ms(500);
			}	
		z=ligh();//Intializing LDR function
		if(z>40)
			{
				go(0);
				printc("Light is : ");
				print(z);
				go(64);
				printc("Light is high");
				delay_ms(500);
			}
		else
			{
				go(0);
				printc("Light is : ");
				print(z);
				go(64);

				printc("Light is Low     ");
				delay_ms(500);
			}	
		
	
	}
}
