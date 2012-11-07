#include <16f877a.h>
#use delay(clock=20000000)
#include <string.h>
#include<pic1.h>
#include<lcd1.h>

int i;

char value[12];


void main()
{
	trisb=0x00;
	lcdinit();
	printf("enter the password");
	clrscr();


	while(1)
	{

		for(i=0;i<=11;i++)
			{
			value[i]=getc();
			//delay_ms(500); **No delay needed**
			//printf("%c", val[i]); /*can use for debugging*/
			//printc(value[i]);/*can use for debugging*/
			}
		if(value[0]=='3' && value[1]=='4' && value[2]=='0' && value[3]=='0' && value[4]=='6' && value[5]=='C' && value[6]=='5' && value[7]=='D' && value[8]=='9' && value[9]=='8' && value[10]=='9' && value[11]=='D')
			{
    		clrscr();
			printc("User 1 Identified");

     		}
	     else if(value[0]=='3' && value[1]=='4' && value[2]=='0' && value[3]=='0' && value[4]=='6' && value[5]=='C' && value[6]=='5' && value[7]=='9' && value[8]=='4' && value[9]=='3' && value[10]=='4' && value[11]=='2')
			{
    		clrscr();
			printc("User 2 Identified");

     		}
	
	}

}