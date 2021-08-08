#include <xc.h>
#include "disp7seg.h"

void disp_init (void)
{
    PORTD = 0x00;
    TRISD = 0x00;
}

void disp_cont (char n)
{
    switch( n )
    {
        case 0:     PORTD = 0x3F;   break;
        case 1:     PORTD = 0x06;   break;
        case 2:     PORTD = 0x5B;   break;
        case 3:     PORTD = 0x4F;   break;
        case 4:     PORTD = 0x66;   break;
        case 5:     PORTD = 0x6D;   break;
        case 6:     PORTD = 0x7D;   break;
        case 7:     PORTD = 0x07;   break;
        case 8:     PORTD = 0x7F;   break;
        case 9:     PORTD = 0x67;   break;
    }
    
}
