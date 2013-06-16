#include <16f877a.h>
#use delay (clock=20000000)
#use rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7)
#include "240c2.c"

void main() {

   byte value,cmd;
   EEPROM_ADDRESS address;

   init_ext_eeprom();

   do {
      do {
         printf("\r\nRead or Write: ");
         cmd=getc();
         cmd=toupper(cmd);
         putc(cmd);
      } while ( (cmd!='R') && (cmd!='W') );

      //printf("\n\rLocation: ");

/* #if sizeof(EEPROM_ADDRESS)==1
      address = gethex();
#else
#if EEPROM_SIZE>0xfff
      address = gethex();
#else
      address = gethex1();
#endif
      address = (address<<8)+gethex();
#endif */

      if(cmd=='R')
		 printf("\r\nLocation: ");
         address=getc();
         printf("\r\nValue: %d\r\n",(int)READ_EXT_EEPROM( address ) );

      if(cmd=='W') {
	 	 printf("\r\nLocation: ");
         address=getc();
         printf("\r\nNew string: ");
         value=getc();
         printf("\n\r");
		 
         WRITE_EXT_EEPROM( address, value );
      }
   } while (TRUE);

}


