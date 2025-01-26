#include "pin.h"
void pin_setmode(pin_t pin,uint8_t mode){
	switch (pin.port){
		case A:
			DDRA=mode?DDRA|(1<<(pin.pin)):DDRA&~(1<<(pin.pin));
			break;
		case B:
			DDRB=mode?DDRB|(1<<(pin.pin)):DDRB&~(1<<(pin.pin));
			break;
		case C:
			DDRC=mode?DDRC|(1<<(pin.pin)):DDRC&~(1<<(pin.pin));
			break;
		case D:
			DDRD=mode?DDRD|(1<<(pin.pin)):DDRD&~(1<<(pin.pin));
			break;
		case E:
			DDRE=mode?DDRE|(1<<(pin.pin)):DDRE&~(1<<(pin.pin));
			break;
		case F:
			DDRF=mode?DDRF|(1<<(pin.pin)):DDRF&~(1<<(pin.pin));
			break;
		case G:
			DDRG=mode?DDRG|(1<<(pin.pin)):DDRG&~(1<<(pin.pin));
			break;
		case na:
			break;
	}
}
void port_config(port_t port,uint8_t cfg){
	switch (port){
		case A:
			DDRA=cfg;
			break;
		case B:
			DDRB=cfg;
			break;
		case C:
			DDRC=cfg;
			break;
		case D:
			DDRD=cfg;
			break;
		case E:
			DDRE=cfg;
			break;
		case F:
			DDRF=cfg;
			break;
		case G:
			DDRG=cfg;
			break;
		case na:
			break;
	}
}
void pin_set(pin_t pin){
	switch (pin.port){
		case A:
			PORTA|=(1<<(pin.pin));
			break;
		case B:
			PORTB|=(1<<(pin.pin));
			break;
		case C:
			PORTC|=(1<<(pin.pin));
			break;
		case D:
			PORTD|=(1<<(pin.pin));
			break;
		case E:
			PORTE|=(1<<(pin.pin));
			break;
		case F:
			PORTF|=(1<<(pin.pin));
			break;
		case G:
			PORTG|=(1<<(pin.pin));
			break;
		case na:
			break;
	}
}
void pin_reset(pin_t pin){
	switch (pin.port){
		case A:
			PORTA&=~(1<<(pin.pin));
			break;
		case B:
			PORTB&=~(1<<(pin.pin));
			break;
		case C:
			PORTC&=~(1<<(pin.pin));
			break;
		case D:
			PORTD&=~(1<<(pin.pin));
			break;
		case E:
			PORTE&=~(1<<(pin.pin));
			break;
		case F:
			PORTF&=~(1<<(pin.pin));
			break;
		case G:
			PORTG&=~(1<<(pin.pin));
			break;
		case na:
			break;
	}	
}
pin_t str_to_pin(char* str){
	pin_t ans;
	if (str[0]>='A' && str[0]<='G')ans.port=(port_t)(str[0]-'A');
	else ans.port=na;
	ans.pin=str[1]-'0';
	return ans;
}