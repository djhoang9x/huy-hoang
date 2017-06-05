bit a;
void main() {
ANSEL = ANSELH =0;
OPTION_REG.B7=0;
TRISB.F0=1;
TRISA.F5=0;
PORTC.F5=0;
a = 0;
do {
    if (Button(&PORTB, 0, 1, 1)) {               // Detect logical one
      a = 1;                              // Update flag
    }
    if (a && Button(&PORTB, 0, 1, 0)) {   // Detect one-to-zero transition
      PORTA.F5 = ~PORTA.F5;                            // Invert PORTC
      a = 0;                              // Update flag
    }
  } while(1);

}