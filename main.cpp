/*
 * BT5-52810NON-DK
 * Examples : LED Blinky
 * Updated on: 2019. 12. 21.
 * Copyright to Seonguk Jeong. All right reserved.
 * E-mail : jswcomkr@naver.com
 */

#include <nrf_gpio.h>
#include <nrf_delay.h>

#define LED0 16
#define LED1 17

int main(void){
	NRF_GPIO->DIRSET = 0x01 << LED0;
	NRF_GPIO->DIRSET = 0x01 << LED1;

	NRF_GPIO->OUTSET = 0x01 << LED0;
	NRF_GPIO->OUTSET = 0x01 << LED1;

	while(1){
		NRF_GPIO->OUTSET = 0x01 << LED0;
		NRF_GPIO->OUTSET = 0x01 << LED1;
		nrf_delay_ms(1000);
		NRF_GPIO->OUTCLR = 0x01 << LED0;
		NRF_GPIO->OUTCLR = 0x01 << LED1;
		nrf_delay_ms(1000);
	}

	return 0;
}
