#include <16f877a.h>
#include<pic.h>
#include<lcd.h>

void main()
{
	char name[]="Hello";
	trisb=0x00;
	delay_ms(10);
	lcdinit();
	delay_ms(1000);
	while(1)
	{
	//printc("Ganesh");
	//clrscr();
	scroll(name,50);//scrolls the string
	delay_ms(1000);
	wave(name,50);//string bounces at wall
	delay_ms(1000);
	}
}