#include <16f877a.h>
#use delay(clock=20000000)
#include <string.h>
#use rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,errors)
int i;
char pas[4]="tes";
char val[4];


void main()
{
	printf("enter the password");
	delay_us(50);
	
	while(1)
	{
		
		for(i=0;i<=2;i++)
			{
			val[i]=getc();
			delay_ms(500);
			printf("%c", val[i]);
			}
			val[i]='\0';
			printf("%s", pas);
			printf("%s", val);
		if(!strcmp(val,pas))

			{
			printf("\nYou can enter  ");
			}
		else
			{
			printf("Go to helll...........");
			printf("%c",val[0]);
			printf("%c",val[1]);
			printf("%c",val[2]);
			}
		delay_us(50);
	}

}
