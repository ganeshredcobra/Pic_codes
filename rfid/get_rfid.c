#include<16f877a.h>
#include<string.h>
#use delay(clock=20000000)
#use rs232(baud=9600,xmit=PIN_C6,rcv=PIN_C7)

int16 i;
char value[12];//12 values of tag ID
void main()
{
	while(1){
		delay_us(50);
		for (i=0; i<12; i++) { //read in the 12 values
	           value[i]=getc();
			   delay_us(50);
			   printf("%c",value[i]);
	     }
		delay_us(50);
	     printf("rfid# %c %c %c %c %c %c %c %c %c %c \r\n", value[1] ,value[2], value[3] ,value[4] ,value[5], value[6], value[7] ,value[8], value[9], value[10]); //display 10 unique id digits
		if(value[1]=='3' && value[2]=='4' && value[3]=='0' && value[4]=='0' && value[5]=='6' && value[6]=='C' && value[7]=='5' && value[8]=='D' && value[9]=='9' && value[10]=='8' && value[10]=='9' && value[10]=='D'){
     	printf("Correct");
     }
	}

}