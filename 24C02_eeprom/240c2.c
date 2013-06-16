#ifndef EEPROM_SDA

#define EEPROM_SDA  PIN_C4
#define EEPROM_SCL  PIN_C3

#endif

#use i2c(master,sda=EEPROM_SDA, scl=EEPROM_SCL)

#define EEPROM_ADDRESS byte
#define EEPROM_SIZE    256

BYTE bin2bcd(BYTE binary_value);
BYTE bcd2bin(BYTE bcd_value);

void init_ext_eeprom() {
   output_low(eeprom_scl);
   output_high(eeprom_sda);
}


void write_ext_eeprom(byte address, byte data) {

   i2c_start();
   i2c_write(0xa0);
   i2c_write(address);
   i2c_write(bin2bcd(data));
   i2c_stop();
   delay_ms(11);
}


byte read_ext_eeprom(byte address) {
   byte data;

   i2c_start();
   i2c_write(0xa0);
   i2c_write(address);
   i2c_start();
   i2c_write(0xa1);
   data=i2c_read(0);
   i2c_stop();
   return(bcd2bin(data));
}

BYTE bin2bcd(BYTE binary_value)
{
  BYTE temp;
  BYTE retval;

  temp = binary_value;
  retval = 0;

  while(1)
  {
    // Get the tens digit by doing multiple subtraction
    // of 10 from the binary value.
    if(temp >= 10)
    {
      temp -= 10;
      retval += 0x10;
    }
    else // Get the ones digit by adding the remainder.
    {
      retval += temp;
      break;
    }
  }

  return(retval);
}


// Input range - 00 to 99.
BYTE bcd2bin(BYTE bcd_value)
{
  BYTE temp;

  temp = bcd_value;
  // Shifting upper digit right by 1 is same as multiplying by 8.
  temp >>= 1;
  // Isolate the bits for the upper digit.
  temp &= 0x78;

  // Now return: (Tens * 8) + (Tens * 2) + Ones

  return(temp + (temp >> 2) + (bcd_value & 0x0f));
} 