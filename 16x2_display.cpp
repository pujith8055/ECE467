DigitalOut rs(p34);
DigitalOut en(p36);
BusOut datapins(p21,p22,p23,p24,p25,p26,p27,p28);
void lcdcmd(unsigned char value);
void lcddata(unsigned char value);
int main() {
    unsigned char x[]="HELLO KRISHNA";
      unsigned char cmd[]={0x38,0x0e,0x01,0x06,0x80};
      int z;
      
  while(1) {
      for(z=0;z<=4;z++)
      {
          lcdcmd(cmd[z]);
          wait_ms(50);
      }
      for(z=0;z<=12;z++)
      {
          lcddata(x[z]);
          wait_ms(50);
      }
      wait(0.5);
  }
}
void lcdcmd(unsigned char value)
{
    datapins=value;
    rs=0;
    en=1;
    
    wait(0.5);
    en=0;
}
void lcddata(unsigned char value)
{
    datapins=value;
    rs=1;
    en=1;
    
    wait(0.5);
    en=0;
}
