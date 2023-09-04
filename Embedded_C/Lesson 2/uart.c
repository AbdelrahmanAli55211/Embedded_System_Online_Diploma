#include "uart.h"
#define UARTODR *((volatile unsigned int * const )(0x101f1000))
void sendname(unsigned char * ptr)
{
	while(*ptr != '\0'){
	UARTODR = (unsigned int )(*ptr);
	ptr++;
}
}