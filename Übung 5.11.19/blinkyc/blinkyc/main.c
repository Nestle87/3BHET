/*
 * blinkyc.c
 *
 * Created: 05.11.2019 14:25:22
 * Author : reinha170164
 */ 

#include <avr/io.h>


int main(void)
{
    // Bit Nr. 5 in DDRB setzen
	DDRB = 1 << DDB5; //DDB5 ist eine Konstante die 5 ist
    while (1) 
    {
			// Bit Nr. 5 in PORTB setzen
			
			PORTB = PORTB | (1 << PORTB5);
			// Bit Nr. 5 in PORTB löschen
			PORTB = PORTB & ~(1 << PORTB5)
	}







}

