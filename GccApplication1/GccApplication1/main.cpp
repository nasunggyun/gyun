/*
 * GccApplication1.cpp
 *
 * Created: 2018-05-02 오전 11:03:21
 * Author : stc_165
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRD = 0xff;
	PORTD = 0xff;
	/* Replace with your application code */
	while (1)
	{
		PORTD = PORTD << 1;
		_delay_ms(200);
		if(PORTD == 0x00){
			PORTD = 0xff;
			_delay_ms(200);
		}
		//PORTD = 0x00;
		//_delay_ms(500);
		//PORTD = 0xff;
		//_delay_ms(500);
		
	}
}

