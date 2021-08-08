#include <xc.h>
#include "disp7seg.h"

void disp_init (void)
{
    PORTD = 0x00;
    TRISD = 0x00;
}

