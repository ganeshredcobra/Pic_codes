#include <16f877a.h>
#use delay (clock=20000000)

#int_TIMER1
TIMER1_isr() 
{
output_high(pin_B0);
delay_us(20);
}
void main()
{
enable_interrupts(INT_TIMER1);
enable_interrupts(GLOBAL);
setup_timer_1(T1_INTERNAL|T1_DIV_BY_4);
set_timer1(5);
while(True);
}