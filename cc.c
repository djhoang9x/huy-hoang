unsigned char const ma_led[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92};
unsigned int a,i;

void main() {
  ANSEL  = 0x01;              // Configure AN2 pin as analog
  ANSELH = 0;                 // Configure other AN pins as digital I/O
  C1ON_bit = 0;               // Disable comparators
  C2ON_bit = 0;

  TRISA  = 0x01;
  porta=0xFD;              // PORTA is input
  TRISD  = 0x00;
  while (1) {
  a = ADC_Read(0);
  i=a*5000.0f/1023;
  if(i<1000)
  portD=ma_led[0];
  delay_ms(100);
  if(i>=1000 && i<1500)
  {
  portD=ma_led[1];
  delay_ms(100);
  }
 if(i>=1500 && i<2500)
  {
  portD=ma_led[2];
  delay_ms(100);
  }
  if(i>=2500 && i<3500)
  {
  portD=ma_led[3];
  delay_ms(100);
  }
  if(i>=3500 &&i <4500)
  {
  portD=ma_led[4];
  delay_ms(100);
  }
  if(i>=4500)
  {
  portD=ma_led[5];
  delay_ms(100);
  }
  }
  }