#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 1000000UL

class Led {
public:
    Led();
    void led_toggle();
};

Led::Led() {
    DDRC = 0xFF;
    PORTC = 0x00;
}

void Led::led_toggle() {
    _delay_ms(500);
    PORTC = ~PORTC;
}

int main() {
    Led ledblink;
    while(1) {
        ledblink.led_toggle();
    }
    return 0;
}
