#include "mbed.h"

DigitalOut mtr(p5);
DigitalOut in(p6);

int main()
{
    while(1)
    {
        mtr=0;
        in=1;
        wait(2);
        
        mtr=1;
        in=0;
        wait(2);
    }
}
