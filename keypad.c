//////////////// KEYPAD(3*4) ////////////////

#INCLUDE <16F877A.h>
#USE DELAY (CLOCK=20000000)
#use rs232(baud=9600,xmit=PIN_C6,rcv=PIN_C7)
int a,b,c;
void main()
{
while(1)
{

///////////// 1st Input ///////////

output_high(pin_d7);
output_low(pin_d6);
output_low(pin_d5);
output_low(pin_d4);

a=input(pin_b0);
b=input(pin_b1);
c=input(pin_b2);
delay_ms(200);

if(a==1)
{
printf("1");
delay_ms(500);
}
if(b==1)
{
printf("2");
delay_ms(800);
}
if(c==1)
{
printf("3\t");
delay_ms(500);
}
///////////// 2nd Input ///////////

output_low(pin_d7);
output_high(pin_d6);
output_low(pin_d5);
output_low(pin_d4);

a=input(pin_b0);
b=input(pin_b1);
c=input(pin_b2);
delay_ms(200);


if(a==1)
{
printf("4");
delay_ms(500);
}
if(b==1)
{
printf("5");
delay_ms(800);
}
if(c==1)
{
printf("6\t");
delay_ms(500);
}

///////////// 3rd Input ///////////

output_low(pin_d7);
output_low(pin_d6);
output_high(pin_d5);
output_low(pin_d4);

a=input(pin_b0);
b=input(pin_b1);
c=input(pin_b2);
delay_ms(200);


if(a==1)
{
printf("7");
delay_ms(500);
}
if(b==1)
{
printf("8");
delay_ms(800);
}
if(c==1)
{
printf("9\t");
delay_ms(500);
}

///////////// 4th Input ///////////

output_low(pin_d7);
output_low(pin_d6);
output_low(pin_d5);
output_high(pin_d4);

a=input(pin_b0);
b=input(pin_b1);
c=input(pin_b2);
delay_ms(200);


if(a==1)
{
printf("*");
delay_ms(500);
}
if(b==1)
{
printf("0");
delay_ms(800);
}
if(c==1)
{
printf("#");
delay_ms(500);
}

}
}
