#include "mbed.h"
DigitalOut myled(p7);
DigitalIn pb(p13);
int main()
{
    pb.mode(PullUp);
    while(1)
    {
        if(pb==1)
        {
            myled=0;
        }
        else
        {
            myled=1;
        }
    }
}
