sbit LCD_RS at RA1_bit;
sbit LCD_EN at RA3_bit;
sbit LCD_D4 at RD4_bit;
sbit LCD_D5 at RD5_bit;
sbit LCD_D6 at RD6_bit;
sbit LCD_D7 at RD7_bit;

sbit LCD_RS_Direction at TRISA1_bit;
sbit LCD_EN_Direction at TRISA3_bit;
sbit LCD_D4_Direction at TRISD4_bit;
sbit LCD_D5_Direction at TRISD5_bit;
sbit LCD_D6_Direction at TRISD6_bit;
sbit LCD_D7_Direction at TRISD7_bit;

void main() {
int i=0;
char txt[8];
 TRISA.F2 = 0;
  PORTA.F2 = 0;
  C1ON_bit = 0;                      // Disable comparators
  C2ON_bit = 0;

  Lcd_Init();

  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Cmd(_LCD_CURSOR_OFF);
ANSEL = ANSELH = 0;
TRISC.F0=1;
OPTION_REG.F5=1;
OPTION_REG.F5=1;
TMR0 = 0;
while (1) {
if(button(&portC, 0, 10, 0))
{
i++;
TMR0 = i;
}
inttostr(i,txt);
LCD_Out(1,1,"so lan nhan");
LCD_Out(2,3,txt);
delay_ms(500);
}
}