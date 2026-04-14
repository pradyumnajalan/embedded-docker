#include <stdint.h>

void delay(uint32_t count) {
    while(count--);
}

int main(void) {
    volatile uint32_t *led = (uint32_t *)0x40020C18;
    while(1) {
        *led ^= (1 << 13);
        delay(1000000);
    }
    return 0;
}