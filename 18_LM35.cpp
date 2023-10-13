#include "mbed.h"
Serial pc(USBTX,USBRX);
AnalogIn Ain(p20);
float ADCdata;
float Temp;
int main(){
    pc.printf("ADC Data value...\n\r");
    while(1)
    {
        ADCdata = Ain;
        ADCdata = ADCdata * 3.3;
        Temp = ADCdata * 100;
        pc.printf("%f\n",Temp);
        wait(0.5);
    }
}
