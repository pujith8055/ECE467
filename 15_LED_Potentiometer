#include "mbed.h"
DigitalOut myled(p6);
AnalogIn pb(p20);
int main()
{
        while(1)
        {
            int x=pb.read(); // 10 bit ADC ( 0 to 1023)
            if(x<512)
            {
                myled=1;
            }
            else
            {
                myled=0;
            }
        }
    }
