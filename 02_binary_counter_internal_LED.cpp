#include "mbed.h"

DigitalOut myled_1(LED1);
DigitalOut myled_2(LED2);

int main() {
  while(1) {
    myled_1 = 0; myled_2=0;
    wait(1);
    myled_1 = 1; myled_2=0;
    wait(1);
    myled_1 = 0; myled_2=1;
    wait(1);
    myled_1 = 1; myled_2=1;
    wait(1);
  }
}
