#include <16f877a.h>
#include <string.h>
#use delay(clock=20000000)
#use rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,errors)

int i,j,k,x,z;
void seven_segment(int z);

void main()
{
	delay_ms(500);
	while(1)
	{
	for(i=0;i<10;i++)
		{		
			delay_ms(500);
			for(j=0;j<10;j++)
				{		
					delay_ms(500);	
					for(k=0;k<10;k++)
						{	
							output_high(pin_D0);//Seven segment enable signal
							output_low(pin_D1);	
							output_low(pin_D2);											
							delay_ms(500);
							seven_segment(k);
							printf("%d",k);
						}
					output_low(pin_D0);
					output_high(pin_D1);
					output_low(pin_D2);
					seven_segment(j);
					printf("%d",j);
				}
			output_low(pin_D0);
			output_low(pin_D1);
			output_high(pin_D2);
			seven_segment(I);
			printf("%d",j);
		}		
    }

}


//----------------------------------------------------------------
void seven_segment(int z)
{
	switch ( z ) 
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
				delay_ms(500);
			}
}




//----------------------------------------------------------------
