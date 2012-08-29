#include<16f877a.h>
#use delay (clock=20000000)
#int_RTCC
RTCC_isr() 
{
output_high(pin_B0);
delay_us(20);
}

void main()
{
enable_interrupts(INT_RTCC);
enable_interrupts(GLOBAL);
setup_timer_0(RTCC_INTERNAL|RTCC_DIV_4);
set_timer0(5);
while(True);
output_high(pin_B1);
}	