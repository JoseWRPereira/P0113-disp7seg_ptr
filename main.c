/*
 * File:   main.c
 * Author: josewrpereira
 *
 * Created on 22 January 2021, 09:56
 */

#include "config.h"
#include <xc.h>
#include "delay.h"
#include "disp7seg.h"

void main(void) 
{
    struct Disp7seg * dsp = &disp;
    char cont = 0;

    disp7seg_init();        // Forma comum de chamada de função
    dsp->init();            // Ponteiro para strct com ponteiro de função
    disp.init();            // Struct com ponteiro para função

    disp7seg(  1 );     delay(1000);
    dsp->show( 2 );     delay(1000);
    disp.show( 3 );     delay(1000);

    while( 1 )
    {
        disp.show( cont );
        delay(500);
        cont = ++cont % 16;
    }
}
