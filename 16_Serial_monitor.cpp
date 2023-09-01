#include "mbed.h"
Serial pc(USBTX, USBRX); // tx, rx
DigitalOut pin1(LED1);
int main()
{
    while (1)
    {
        pin1=0;
        pc.printf("LED OFF\n");
        wait(1);
        pin1=1;
        pc.printf("LED ON\n");
        wait(1);
        }
}
