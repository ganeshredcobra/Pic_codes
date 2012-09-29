#include<16f877a.h>
#include<pic.h>
#include<lcd.h>
#use delay(clock=20000000)
void main()
{	
	trisb=0x00;
	delay_ms(10);
	lcdinit();
	delay_ms(1000);
	while(True)
	{
		int x;
		output_low(pin_B0);/*connected to D0 Pin10 of TWS 434 */
		delay_ms(100);
		output_low(pin_B0);
		delay_ms(50);
		x=input(pin_C1);/*connected to D0 Pin10 of RWS 434 */
		if(x)
			{
				printc("Temp is high");
				delay_ms(1000);
			}
	}	

}
