#include <Arduino.h>
#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 16000000UL

void setup() {
  DDRC = 0xff;
  PORTC = 0xff;
  PORTC = 0x00;
}

void loop() {
    red();
    red_yellow();
    green();
    yellow();
}

void red() {
    PORTC &= ~(1 << PC1);
    PORTC |= (1 << PC2);
    _delay_ms(5000);
}

void red_yellow() {
    PORTC &= ~(1 << PC2); 
    PORTC |= (1 << PC1);
    PORTC |= (1 << PC2);
    _delay_ms(5000);
}

void green() {
    PORTC &= ~(1 << PC1); 
    PORTC &= ~(1 << PC2); 
    PORTC |= (1 << PC0);
    _delay_ms(5000);
}

void yellow() {
    PORTC &= ~(1 << PC0); 
    PORTC |= (1 << PC1);
    _delay_ms(5000);
}