unsigned char const ma_led[]={0x89,0x86,0xC7,0xC0};
int i ;
void main () {
ANSEL = ANSELH = 0;
TRISB=0XFF;
trisD=0x00;
TrisA= 0x00;
while (1) {
for(i=0;i<40;i++)
{
PORTA=0xDF;
portD=ma_led[0];
delay_ms(5);
PORTA=0xEF;
portD=ma_led[1];
delay_ms(5);
PORTA=0xF7;
portD=ma_led[2];
delay_ms(5);
PORTA=0xFB;
portD=ma_led[2];
delay_ms(5);
PORTA=0xFD;
portD=ma_led[3];
delay_ms(5);
}
for(i=0;i<40;i++)
{
PORTA=0xED;
portD=ma_led[0];
delay_ms(5);
PORTA=0xF7;
portD=ma_led[1];
delay_ms(5);
PORTA=0xFB;
portD=ma_led[2];
delay_ms(5);
PORTA=0xFD;
portD=ma_led[2];
delay_ms(5);
PORTA=0xFE;
portD=ma_led[3];
delay_ms(5);
}

for(i=0;i<40;i++)
{
PORTA=0xF7;
portD=ma_led[0];
delay_ms(5);
PORTA=0xFB;
portD=ma_led[1];
delay_ms(5);
PORTA=0xFD;
portD=ma_led[2];
delay_ms(5);
PORTA=0xFE;
portD=ma_led[2];
delay_ms(5);
}
}
}