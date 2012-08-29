#include<16f877a.h>
#use delay (clock=20000000)

#int_TIMER2
TIMER2_isr() 
{
output_high(pin_B0);
delay_us(20);
}
void main()
{
enable_interrupts(INT_TIMER2);
enable_interrupts(GLOBAL);
setup_timer_2(T2_DIV_BY_4,1,1);
set_timer2(5);
while(True);
}	