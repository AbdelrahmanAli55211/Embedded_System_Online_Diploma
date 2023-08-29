#include "stdio.h"

#define DPRINTF(debug_level,...) if(debug_level>1){\
								 printf("@func: %s ,file: %s ,line: %d ",__func__,__FILE__,__LINE__);\
								 printf(">>\t");\
								 printf(__VA_ARGS__);}
#define debug
void can_send(void)
{
	#ifdef debug
	DPRINTF(3,"\n");
	#endif
}
void can_init(void)
{
	#ifdef debug
	DPRINTF(3,"\n");
	#endif
}
int main(void)
{
    #ifdef debug
	DPRINTF(3,"\n");
	#endif
	can_init();
	can_send();
	#ifdef debug
	DPRINTF(3,"\n");
    #endif
	return 0;
}