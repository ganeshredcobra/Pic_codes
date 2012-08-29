#include <16f877a.h>
#use delay (clock=20000000)
#include<pic.h>
#include<lcd.h>

void main()
{
	trisb=0x00;
	lcdinit();
	while(1)
	{
	printc("Ganesh");
	delay_ms(10);
	}
}	