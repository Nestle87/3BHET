;
; blinkya.asm
;
; Created: 29.10.2019 14:45:23
; Author : reinha170164
;


; Blink PB5 as fast as possible

	sbi DDRB, 5
start:
    cbi PORTB, 5
	sbi PORTB, 5
	rjmp start


