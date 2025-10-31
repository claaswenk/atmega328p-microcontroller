#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 16000000UL

void setup() {
    DDRD |= (1 << PD5) | (1 << PD6);
    OCR0A = 128;
    OCR0B = 32;
    TCCR0A |= (1 << COM0A1) | (1 << COM0B1);
    TCCR0A |= (1 << WGM01) | (1 << WGM00);
    TCCR0B |= (1 << CS01);
}

int main(void) {
    setup();
    while (1) 
    {  
    }
}