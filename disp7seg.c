#include <xc.h>
#include "delay.h"

char digitos7seg[16] = {    0x3F, 0x06, 0x5B, 0x4F, 
                            0x66, 0x6D, 0x7D, 0x07, 
                            0x7F, 0x6F, 0x77, 0x7C, 
                            0x39, 0x5E, 0x79, 0x71  };

void disp7seg_init( void )
{
    TRISD = 0x00;

    PORTD = 0xFF;    delay(500);
    PORTD = 0x00;    delay(500);
    PORTD = 0xFF;    delay(500);
    PORTD = 0x00;    delay(500);
}

void disp7seg( unsigned char num )
{
    PORTD = (num < 16) ? digitos7seg[num] : 0;
}




