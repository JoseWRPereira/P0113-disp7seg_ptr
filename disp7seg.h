#ifndef DISP7SEG_H
#define DISP7SEG_H

void disp7seg_init( void );
void disp7seg( unsigned char num );

struct Disp7seg
{
    void (*init)(void);
    void (*show)(unsigned char num);

} disp = {disp7seg_init,disp7seg};

#endif

