#use delay(clock=20000000)
#fuses XT,NOWDT,BROWNOUT,PUT,NOLVP

#USE RS232(BAUD=9600,errors,PARITY=N,XMIT=PIN_C6,RCV=PIN_C7,BITS=8) 


#byte tmr0    =0x01
#byte pcl     =0x02
#byte status  =0x03
#byte porta   =0x05
	#bit ra0  =0x05.0
	#bit ra1  =0x05.1
	#bit ra2  =0x05.2
	#bit ra3  =0x05.3
	#bit ra4  =0x05.4
	#bit ra5  =0x05.5

#byte portb   =0x06
	#bit rb0  =0x06.0
	#bit rb1  =0x06.1
	#bit rb2  =0x06.2
	#bit rb3  =0x06.3
	#bit rb4  =0x06.4
	#bit rb5  =0x06.5
	#bit rb6  =0x06.6
	#bit rb7  =0x06.7

#byte portc   =0x07
	#bit rc0  =0x07.0
	#bit rc1  =0x07.1
	#bit rc2  =0x07.2
	#bit rc3  =0x07.3
	#bit rc4  =0x07.4
	#bit rc5  =0x07.5
	#bit rc6  =0x07.6
	#bit rc7  =0x07.7

#byte portd   =0x08
	#bit rd0  =0x08.0
	#bit rd1  =0x08.1
	#bit rd2  =0x08.2
	#bit rd3  =0x08.3
	#bit rd4  =0x08.4
	#bit rd5  =0x08.5
	#bit rd6  =0x08.6
	#bit rd7  =0x08.7

#byte porte   =0x09
	#bit re0  =0x09.0
	#bit re1  =0x09.1
	#bit re2  =0x09.2

#byte pclath  =0x0a
#byte intcon  =0x0b
	// bits of intcon
	#bit rbif   = 0x0b.0
	#bit intf   = 0x0b.1
	#bit t0if   = 0x0b.2
	#bit rbie   = 0x0b.3
	#bit inte   = 0x0b.4
	#bit t0ie   = 0x0b.5
	#bit peie   = 0x0b.6
	#bit gie    = 0x0b.7

#byte pir1    =0x0c
	#bit txif =0x0c.0
	#bit tmr1if =0x0c.4
#byte pir2    =0x0d
#byte tmr1l   =0x0e
#byte tmr1h   =0x0f
#byte t1con   =0x10
	#bit tmr1on=0x10.0
#byte tmr2    =0x11
#byte t2con   =0x12
#byte sspbuf  =0x13
#byte sspcon  =0x14
#byte ccpr1l  =0x15
#byte ccpr1h  =0x16
#byte ccp1con =0x17
#byte rcsta   =0x18
#byte txreg	  =0x19
#byte rcreg	  =0x1a
#byte ccpr2l  =0x1b
#byte ccpr2h  =0x1c
#byte ccp2con =0x1d
#byte adresh  =0x1e
#byte adcon0  =0x1f
#bit adgo	 =0x1f.2

#byte option_reg =0x81
	// bits of optiopn reg
	#bit ps0    =0x81.0
	#bit ps1    =0x81.1
	#bit ps2    =0x81.2
	#bit psa    =0x81.3
	#bit t0se   =0x81.4
	#bit t0cs   =0x81.5
	#bit intedg =0x81.6
	#bit rbpu   =0x81.7

#byte trisa  =0x85
#byte trisb  =0x86
	#bit trisb0	=0x86.0
	#bit trisb1	=0x86.1
	#bit trisb2	=0x86.2
	#bit trisb3	=0x86.3
	#bit trisb4	=0x86.4
	#bit trisb5	=0x86.5
	#bit trisb6	=0x86.6
	#bit trisb7	=0x86.7

#byte trisc  =0x87
	#bit trisc0	=0x87.0
	#bit trisc1	=0x87.1
	#bit trisc2	=0x87.2
	#bit trisc3	=0x87.3
	#bit trisc4	=0x87.4
	#bit trisc5	=0x87.5
	#bit trisc6	=0x87.6
	#bit trisc7	=0x87.7
#byte trisd  =0x88
	#bit trisd0	=0x88.0
	#bit trisd1	=0x88.1
	#bit trisd2	=0x88.2
	#bit trisd3	=0x88.3
	#bit trisd4	=0x88.4
	#bit trisd5	=0x88.5
	#bit trisd6	=0x88.6
	#bit trisd7	=0x88.7
#byte trise  =0x89
#byte pie1    =0x8c
#byte pie2    =0x8d
#byte pcon	  =0x8e
#byte sspcon2 =0x91
#byte pr2     =0x92
#byte sspadd  =0x93
#byte sspstat =0x94
#byte txsta   =0x98
#byte spbrg   =0x99
#byte cmcon   =0x9c
#byte cvrcon  =0x9d
#byte adresl  =0x9e
#byte adcon1  =0x9f


#byte eedata  =0x10c
#byte eeadr   =0x10d
#byte eedath  =0x10e
#byte eeadrh  =0x10f


#byte eecon1  =0x18c
#byte eecon2  =0x18d

