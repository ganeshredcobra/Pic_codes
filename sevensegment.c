#include <16f877a.h>
#use delay(clock=20000000)
#include <string.h>
#use rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,errors)

void main()
{
	int val,x;
	output_high(pin_D0);//Seven segment enable signal
	delay_ms(500);
	while(1)
	{
	printf("enter the No");
	x=getc();
	val=x-48;
	printf("%d",val);
	delay_ms(500);
	switch ( val ) 
        {
            case 1:        
				output_low(pin_B0);
				output_high(pin_B1);
				output_high(pin_B2);
				output_low(pin_B3);
				output_low(pin_B4);
				output_low(pin_B5);
				output_low(pin_B6);
             break;
            case 2:          
				output_high(pin_B0);
				output_high(pin_B1);
				output_low(pin_B2);
				output_high(pin_B3);
				output_high(pin_B4);
				output_low(pin_B5);
				output_high(pin_B6);
                break;
            case 3:         
				output_high(pin_B0);
				output_high(pin_B1);
				output_high(pin_B2);
				output_high(pin_B3);
				output_low(pin_B4);
				output_low(pin_B5);
				output_high(pin_B6);
                break;
            case 4:        
				output_low(pin_B0);
				output_high(pin_B1);
				output_high(pin_B2);
				output_low(pin_B3);
				output_low(pin_B4);
				output_high(pin_B5);
				output_high(pin_B6);
                break;
			case 5:
				output_high(pin_B0);
				output_low(pin_B1);
				output_high(pin_B2);
				output_high(pin_B3);
				output_low(pin_B4);
				output_high(pin_B5);
				output_high(pin_B6);
                break;
			case 6:            
				output_high(pin_B0);
				output_low(pin_B1);
				output_high(pin_B2);
				output_high(pin_B3);
				output_high(pin_B4);
				output_high(pin_B5);
				output_high(pin_B6);
                break;
			case 7:            
				output_high(pin_B0);
				output_high(pin_B1);
				output_high(pin_B2);
				output_low(pin_B3);
				output_low(pin_B4);
				output_low(pin_B5);
				output_low(pin_B6);
             	break;
			case 8:            
				output_high(pin_B0);
				output_high(pin_B1);
				output_high(pin_B2);
				output_high(pin_B3);
				output_high(pin_B4);
				output_high(pin_B5);
				output_high(pin_B6);
                break;
			case 9:            
				output_high(pin_B0);
				output_high(pin_B1);
				output_high(pin_B2);
				output_low(pin_B3);
				output_low(pin_B4);
				output_high(pin_B5);
				output_high(pin_B6);
                break;
            default:            
				output_high(pin_B0);
				output_high(pin_B1);
				output_high(pin_B2);
				output_high(pin_B3);
				output_high(pin_B4);
				output_high(pin_B5);
				output_low(pin_B6);
                break;
        }
    }
}
