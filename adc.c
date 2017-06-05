sbit LCD_RS at RB4_bit;
sbit LCD_EN at RB5_bit;
sbit LCD_D4 at RB0_bit;
sbit LCD_D5 at RB1_bit;
sbit LCD_D6 at RB2_bit;
sbit LCD_D7 at RB3_bit;

sbit LCD_RS_Direction at TRISB4_bit;
sbit LCD_EN_Direction at TRISB5_bit;
sbit LCD_D4_Direction at TRISB0_bit;
sbit LCD_D5_Direction at TRISB1_bit;
sbit LCD_D6_Direction at TRISB2_bit;
sbit LCD_D7_Direction at TRISB3_bit;

unsigned int adc,adc2;
char k[6];

void main() {
            ANSEL  = 4 ;            // --> Binär 00000100, Nur der erste Pin
            AnselH = 0;              // vom PortA ist Analog
            C1ON_bit = 0;           // 0 setzen um die Komparatoren auszuschalten
            C2ON_bit = 0;           // ...

            TRISA  = 255;              // PortA als Eingang
            TRISB  = 0;             // PortB als Ausgang

            PORTA = 0;
            PORTB = 0;
            Lcd_Init();
            LCD_CMD(_LCD_CLEAR);
            LCD_CMD(_LCD_CURSOR_OFF);

  while(1) {
           adc = Adc_Read(2);           //AN2 auslesen
           adc2 = adc/2;                // eingelesenen Wert durch 2 teilen
           wordtostr(adc2,k);           // word zu string wandeln
           lcd_out(2,5,k);

           Lcd_Chr(2,10,223);              // 223 = ° Zeichen

    delay_ms(1000);

         }


}
