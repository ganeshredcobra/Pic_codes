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
	setup_timer_1(T1_INTERNAL|T1_DIV_BY_1);	
	setup_ccp1(CCP_COMPARE_SET_ON_MATCH);
	set_timer1(500);
	ccp_1=40000;
	while(1);
	
}	