#include<16f877a.h>
#use delay(clock=20000000)


void main()
{
int i;
setup_ccp1(CCP_PWM);
setup_timer_2(T2_DIV_BY_4,10,1);

while(1)
{
for(i=0;i<100;i++)
{
set_pwm1_duty(i);
delay_us(50);

}	
}

}