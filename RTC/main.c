#include <16f877a.h>
#use delay (clock=20000000)
#use rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,errors)
#include "ds1307.c"
void main()
{

	byte sec;
	byte min;
	byte hrs;
	byte day;
	byte month;
	byte year;
	byte dow;

	ds1307_init();
	/*ds1307_set_date_time(13,6,13,4,01,20,10); // used to set time for first time
	//13-Jun-2013-Thursday-01-20-10
	delay_ms(1000);*/
	while(True)
	{
		
		ds1307_get_date(day,month,year,dow);
		ds1307_get_time(hrs,min,sec);
		printf("\%02d,\%02d,\%02d \r\n",day,month,year);
		printf("\%02d,\%02d,\%02d \r\n",hrs,min,sec);
		delay_ms(1000);
	}
}
