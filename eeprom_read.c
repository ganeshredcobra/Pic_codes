#include<16f877a.h>
#include<pic.h>
#include<lcd.h>
#use delay(clock=20000000)
#use rs232(baud=9600, xmit = PIN_C6 , rcv = PIN_C7,ERRORS,bits=8) 

#define e_addr1	15
#define e_addr2	10
int one,two,data;
void main()
{
while(1)
{
	printf("enter number");
	data=getc();
	write_eeprom(e_addr1,data);
	one=read_eeprom(e_addr1);
	two=read_eeprom(e_addr2);
	delay_ms(100);
	printf("one : %d\n",one);
	printf("two : %d\n",two);	
}

}