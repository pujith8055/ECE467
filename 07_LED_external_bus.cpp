#include "mbed.h"

BusOut myled(p5,p6,p7,p8);

int main() {
    unsigned char i;
  while(1) {
      for(i=0;i<=15;i++){
          myled.write(i);
          wait(1);
      }
  }
}
