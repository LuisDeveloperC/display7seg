#include <xc.h>
#include "config.h"
#include "disp7seg.h"


void main(void) 
{
    disp_init();
    
    char num = 0;
    
    while(1)
    {
        for(num = 0; num <= 9; num++)
        {
            disp_cont(num);
            __delay_ms(500);
        }
    }
    
    return;
}
