#include "stdint.h"

extern int main(void);
extern unsigned int _S_DATA;
extern unsigned int _E_DATA;
extern unsigned int _S_BSS;
extern unsigned int _E_BSS;
extern unsigned int _E_TEXT;
extern unsigned int _stack_top;
#define stack_start &_stack_top
void reset_handler(void)
{
	unsigned int DATA_size = (unsigned char *)&_E_DATA - (unsigned char *)&_S_DATA;
	unsigned char* p_src=(unsigned char *)&_E_TEXT;
	unsigned char* p_dst=(unsigned char *)&_S_DATA;
	for(int i=0;i<DATA_size;i++)
	{
		*((unsigned char *)p_dst++)=*((unsigned char *)p_src++);
	}
	unsigned int BSS_size=(unsigned char *)&_E_BSS - (unsigned char *)&_S_BSS;
	p_dst=(unsigned char *)&_S_BSS;
	for(int i=0;i<BSS_size;i++)
	{
		*((unsigned char *)p_dst++)=(unsigned char )0;
	}
	main();
}
void default_handler(void)
{
	reset_handler();
}
void NMI_Handler(void) __attribute__ ((weak, alias ("default_handler")));;
void H_Fault_Handler(void) __attribute__ ((weak, alias ("default_handler")));;
void MM_Fault_Handler(void) __attribute__ ((weak, alias ("default_handler")));;
void Bus_Fault_Handler(void) __attribute__ ((weak, alias ("default_handler")));;
void Usage_Fault_Handler(void) __attribute__ ((weak, alias ("default_handler")));;
uint32_t vectors[] __attribute__((section(".vectors")))=
{
	(uint32_t)stack_start,
	(uint32_t)&reset_handler,
	(uint32_t)&NMI_Handler,
	(uint32_t)&H_Fault_Handler,
	(uint32_t)&MM_Fault_Handler,
	(uint32_t)&Bus_Fault_Handler,
	(uint32_t)&Usage_Fault_Handler,
};