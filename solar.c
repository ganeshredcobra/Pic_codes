#include<16f877a.h>
#use delay(clock=20000000)
#use rs232(baud=9600,xmit=PIN_C6,rcv=PIN_C7)

void clockwise();
void anticlockwise();
float fn_ldr1();
float fn_ldr2();
float val_ldr1,val_ldr2=0;//variables for storing values of ldr1 and ldr2..
float x,y,z=0;
void main()
{   
	
	setup_adc_ports(ALL_ANALOG);
	setup_adc(ADC_CLOCK_INTERNAL);
	delay_us(20);
	

	while(1)
	{
		
		x=fn_ldr1();//Intializing LDR function
		//printf("Ldr1 val is %f \n",x);
		y=fn_ldr2();
		delay_ms(1000);
		//printf("Ldr2 val is %f \n",y);
		//delay_ms(1000);
		if(x>y)
		{
		
			clockwise();
			printf("x %f :\n",x);
			printf("y %f :\n",y);
		}	
		else
		{
			anticlockwise();
		}	

	}
}

float fn_ldr1()//Function for reading light
	{
		set_adc_channel(0);//Connected to RA0
		delay_us(20);			
		val_ldr1=read_adc();
		return val_ldr1;
	}
float fn_ldr2()//Function for reading light
	{
		set_adc_channel(1);//Connected to RA1
		delay_us(20);			
		val_ldr2=read_adc();
		return val_ldr2;
	}
void clockwise()
	{
		output_high(pin_C2);
		output_low(pin_C3);
		output_low(pin_D0);
		output_low(pin_D2);
		delay_ms(1000);
		
		output_low(pin_C2);
		output_high(pin_C3);
		output_low(pin_D0);
		output_low(pin_D2);
		delay_ms(1000);
		
		output_low(pin_C2);
		output_low(pin_C3);
		output_high(pin_D0);
		output_low(pin_D2);
		delay_ms(1000);
		
		output_low(pin_C2);
		output_low(pin_C3);
		output_low(pin_D0);
		output_high(pin_D2);
		delay_ms(1000);
		
		
	}	
	
	void anticlockwise()
	{
		output_low(pin_C2);
		output_low(pin_C3);
		output_low(pin_D0);
		output_high(pin_D2);
		delay_ms(1000);

		output_low(pin_C2);
		output_low(pin_C3);
		output_high(pin_D0);
		output_low(pin_D2);
		delay_ms(1000);

		output_low(pin_C2);
		output_high(pin_C3);
		output_low(pin_D0);
		output_low(pin_D2);
		delay_ms(1000);

		output_high(pin_C2);
		output_low(pin_C3);
		output_low(pin_D0);
		output_low(pin_D2);
		delay_ms(1000);	

	}	