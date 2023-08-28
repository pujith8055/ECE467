/*
This turn on the led when the switch is closed
*/
#include "mbed.h"
DigitalOut myled(p7);
DigitalIn pb(p13);


int main()
{
    while(1)
    {
        if(pb==1)
        {
            myled=1;
        }
        else
        {
            myled=0;
        }
    }
}
