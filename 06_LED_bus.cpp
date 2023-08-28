#include "mbed.h"

BusOut myled(LED3,LED2,LED1);

int main() {
    unsigned char i;
  while(1) {
      for(i=0;i<=7;i++){
          myled.write(i);
          wait(1);
      }
  }
}
/* For 4 internal LEDs
#include "mbed.h"

BusOut myled(LED4,LED3,LED2,LED1);

int main() {
    unsigned char i;
  while(1) {
      for(i=0;i<=15;i++){
          myled.write(i);
          wait(1);
      }
  }
}
*/
