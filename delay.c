#include "config.h"
#include <xc.h>

void delay( unsigned int d )
{
    while( d )
    {
        __delay_ms(1);
        --d;
    }
}
