#include <Arduino.h>
#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 16000000UL

void setup() {
    DDRD = 0x00;
    PORTD = (1 << PORTD2) | (1 << PORTD3);
    DDRC = 0xff;
    PORTC = 0xff;
    PORTC = 0x00;
}

void loop() {
        
    while (1) {

        if(!(PIND & (1 << PIND2))){
            traffic_light();
        }
    }
}

bool check_interrupt() {
    return !(PIND & (1 << PIND3)); // button pressed = interrupt
    PORTC &= ~(1 << PC0);
    PORTC &= ~(1 << PC1);
    PORTC &= ~(1 << PC2);
}

void traffic_light() {
    if (check_interrupt()) return;
    red();
    if (check_interrupt()) return;
    red_yellow();
    if (check_interrupt()) return;
    green();
    if (check_interrupt()) return;
    yellow();
    if (check_interrupt()) return;
    red();
    PORTC &= ~(1 << PC2);
    }

void red(){
    PORTC &= ~(1 << PC1);
    PORTC |= (1 << PC2);
    _delay_ms(5000);
}

void red_yellow(){
    PORTC &= ~(1 << PC2);
    PORTC |= (1 << PC1);
    PORTC |= (1 << PC2);
    _delay_ms(5000);
}

void green(){
    PORTC &= ~(1 << PC1);
    PORTC &= ~(1 << PC2);
    PORTC |= (1 << PC0);
    _delay_ms(5000);
}

void yellow(){
    PORTC &= ~(1 << PC0);
    PORTC |= (1 << PC1);
    _delay_ms(5000);
}