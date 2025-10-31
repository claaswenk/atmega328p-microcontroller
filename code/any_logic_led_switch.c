#include <Arduino.h>
#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#define F_CPU 16000000UL

void setup() {
    DDRD = 0x00;
    PORTD = (1 << PORTD2) | (1 << PORTD3);  // Pull-Up resistor
    DDRC = 0xff;
    EICRA = (1 << ISC00) | (1 << ISC10);    // set INT0 to trigger on ANY logic change
    EIMSK |= (1 << INT0) | (1 << INT1);     // turns on INT0 and INT1 (PD2, PD3 connector)
    sei();                                  // turn on interrupts
}

ISR(INT0_vect) {
    PORTC &= ~(1 << PINC0);
}

ISR(INT1_vect) {
    PORTC |= (1 << PINC0);
}