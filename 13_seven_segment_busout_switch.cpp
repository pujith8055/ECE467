//seven segment display with common cathode using busout with switch
#include "mbed.h"

BusOut seg(p5,p6,p7,p8,p9,p10,p11);
DigitalIn button(p12);

int main()
{
    unsigned char i = 0;
    unsigned char display[]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
    bool button_pressed = false;

    while(1){
        if (button.read() == 1 && !button_pressed) {
            button_pressed = true;
            i=(i+1)%10;
        } 
        else if (button.read() == 0) {
            button_pressed = false;
        }
        seg.write(display[i]);
        wait(0.5);
    }
}
