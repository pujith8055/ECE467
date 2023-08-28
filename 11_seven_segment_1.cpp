//seven segment display with common cathode normal method
#include "mbed.h"

DigitalOut a(p5);
DigitalOut b(p6);
DigitalOut c(p7);
DigitalOut d(p8);
DigitalOut e(p9);
DigitalOut f(p10);
DigitalOut g(p11);

int main()
{
    while(1)
    {
        //0
        a=1;
        b=1;
        c=1;
        d=1;
        e=1;
        f=1;
        g=0;

        wait(1);

        //1
        a=0;
        b=1;
        c=1;
        d=0;
        e=0;
        f=0;
        g=0;

        wait(1);

        //2
        a=1;
        b=1;
        c=0;
        d=1;
        e=1;
        f=0;
        g=1;

        wait(1);

        //3
        a=1;
        b=1;
        c=1;
        d=1;
        e=0;
        f=0;
        g=1;

        wait(1);

        //4
        a=0;
        b=1;
        c=1;
        d=0;
        e=0;
        f=1;
        g=1;

        wait(1);

        //5
        a=1;
        b=0;
        c=1;
        d=1;
        e=0;
        f=1;
        g=1;

        wait(1);

        //6
        a=1;
        b=0;
        c=1;
        d=1;
        e=1;
        f=1;
        g=1;

        wait(1);

        //7
        a=1;
        b=1;
        c=1;
        d=0;
        e=0;
        f=0;
        g=1;

        wait(1);

        //8
        a=1;
        b=1;
        c=1;
        d=1;
        e=1;
        f=1;
        g=1;

        wait(1);

        //9
        a=1;
        b=1;
        c=1;
        d=1;
        e=0;
        f=1;
        g=1;

        wait(1);
    }
}
