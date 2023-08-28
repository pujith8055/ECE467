#include "mbed.h"

DigitalOut red(p5);
DigitalOut yellow(p6);
DigitalOut green(p7);

int main() {
  while(1) {
    red=1; yellow=0; green=0;//red signal
    wait(2);
    red=0; yellow=1; green=0;//yellow signal
    wait(1);
    red=0; yellow=0; green=1;//green signal
    wait(3);
    red=0; yellow=1; green=0;//yellow signal
    wait(1);
  }
}
