#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#define F_CPU 16000000UL

ISR (TIMER0_COMPA_vect) {
    PORTC = ~PORTC;
}

ISR (INT0_vect) {
    OCR0A = 117;
    PORTC = ~PORTC;
}

ISR (INT1_vect) {
    OCR0A = 70;
    PORTC = ~PORTC;
}

void setup() {
    TIMSK0 |= (1 << OCIE0A);                    // enablen
    TCCR0A |= (1 << WGM01);                     // mode to CTC
    OCR0A = 70;                                 // set frequency
    TCCR0B |= (1 << CS02);
    DDRC = 0xff;
    PORTC = 0x00;
    DDRD = 0x00;
    DDRD &= ~((1 << PORTD2) | (1 << PORTD3));   // PD2, PD3 as input
    PORTD = (1 << PORTD2) | (1 << PORTD3);      // activate internal pull-up resistors
    EICRA = (1 << ISC00) | (1 << ISC10);        // set INT0 to trigger on ANY logic change
    EIMSK |= (1 << INT0) | (1 << INT1);         // turns on INT0 and INT1 
    sei();
}

int main(void) {
    setup();
    while (1) 
    {
    }
}