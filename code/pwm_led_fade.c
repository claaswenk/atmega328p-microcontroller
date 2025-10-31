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

void scale_up(uint8_t *dutyA, uint8_t *dutyB) {    
    while (*dutyA < 255 && *dutyB > 0) {
        (*dutyA)++;
        (*dutyB)--;
        OCR0A = *dutyA;
        OCR0B = *dutyB;
        _delay_ms(10);
    }
}

void scale_down(uint8_t *dutyA, uint8_t *dutyB) {
    while (*dutyA > 0 && *dutyB < 255) {
        (*dutyA)--;
        (*dutyB)++;
        OCR0A = *dutyA;
        OCR0B = *dutyB;
        _delay_ms(10);
    }
}

int main(void) {
    setup();    
    uint8_t dutyA = 0;
    uint8_t dutyB = 255;

    while (1) {
        scale_up(&dutyA, &dutyB);
        scale_down(&dutyA, &dutyB);
    }
}