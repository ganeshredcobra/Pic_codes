#include<16f877a.h>
#use delay(clock=20000000)
#int_CCP1
CCP1_isr()
{
	output_B(0xff);
}	

void main()
{
	enable_interrupts(INT_CCP1);
	enable_interrupts(global);
	setup_ccp1(CCP_CAPTURE_RE);
	setup_timer_1(T1_INTERNAL);	
	while(1);
	
}	