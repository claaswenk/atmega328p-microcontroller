#include <Arduino.h>
#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 16000000UL

void setup() {
  DDRB = (1 << DDD5);
  PORTB = (1 << PORTB5);
}

void loop() {               // 1Hz bzw. 1 Periode / Sekunde -> 1 Hz = 500 ms + 500 ms
  PORTB ^= 0b00100000;
  _delay_ms(500);
}