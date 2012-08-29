#include <16f877a.h>
#include<pic.h>
#include<lcd.h>

void main()
{
	trisb=0x00;
	delay_ms(10);
	lcdinit();
	delay_ms(1000);
	while(1)
	{
	printc("Ganesh");
	delay_ms(1000);
	}
}