#ifndef PIN_H
#define PIN_H
#include <stdint.h>
#include <avr/io.h>

typedef enum {
	A,B,C,D,E,F,G,na
}port_t;
typedef struct {
	port_t port;
	uint8_t pin;
}pin_t;

#define PS pin_set
#define PR pin_reset
#define OUTPUT 1
#define HIGH 1
#define INPUT 0
#define LOW 0
#define PIN(a,b) (pin_t){(port_t)a,b}
	
#define A0 PIN(A,0)
#define A1 PIN(A,1)
#define A2 PIN(A,2)
#define A3 PIN(A,3)
#define A4 PIN(A,4)
#define A5 PIN(A,5)
#define A6 PIN(A,6)
#define A7 PIN(A,7)

#define B0 PIN(B,0)
#define B1 PIN(B,1)
#define B2 PIN(B,2)
#define B3 PIN(B,3)
#define B4 PIN(B,4)
#define B5 PIN(B,5)
#define B6 PIN(B,6)
#define B7 PIN(B,7)

#define C0 PIN(C,0)
#define C1 PIN(C,1)
#define C2 PIN(C,2)
#define C3 PIN(C,3)
#define C4 PIN(C,4)
#define C5 PIN(C,5)
#define C6 PIN(C,6)
#define C7 PIN(C,7)

#define D0 PIN(D,0)
#define D1 PIN(D,1)
#define D2 PIN(D,2)
#define D3 PIN(D,3)
#define D4 PIN(D,4)
#define D5 PIN(D,5)
#define D6 PIN(D,6)
#define D7 PIN(D,7)

#define E0 PIN(E,0)
#define E1 PIN(E,1)
#define E2 PIN(E,2)
#define E3 PIN(E,3)
#define E4 PIN(E,4)
#define E5 PIN(E,5)
#define E6 PIN(E,6)
#define E7 PIN(E,7)

#define F0 PIN(F,0)
#define F1 PIN(F,1)
#define F2 PIN(F,2)
#define F3 PIN(F,3)
#define F4 PIN(F,4)
#define F5 PIN(F,5)
#define F6 PIN(F,6)
#define F7 PIN(F,7)

#define G0 PIN(G,0)
#define G1 PIN(G,1)
#define G2 PIN(G,2)
#define G3 PIN(G,3)
#define G4 PIN(G,4)
#define G5 PIN(G,5)
#define G6 PIN(G,6)
#define G7 PIN(G,7)

void pin_setmode(pin_t, uint8_t);
void port_config(port_t,uint8_t);
void pin_set(pin_t);
void pin_reset(pin_t);
pin_t str_to_pin(char*);
#endif //PIN_H