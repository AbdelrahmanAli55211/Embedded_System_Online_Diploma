#include "stdint.h"

extern int main(void);
extern unsigned int _S_DATA;
extern unsigned int _E_DATA;
extern unsigned int _S_BSS;
extern unsigned int _E_BSS;
extern unsigned int _E_TEXT;
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
static unsigned int stack_top[256];
void NMI_Handler(void) __attribute__ ((weak, alias ("default_handler")));;
void H_Fault_Handler(void) __attribute__ ((weak, alias ("default_handler")));;
void MM_Fault_Handler(void) __attribute__ ((weak, alias ("default_handler")));;
void Bus_Fault_Handler(void) __attribute__ ((weak, alias ("default_handler")));;
void Usage_Fault_Handler(void) __attribute__ ((weak, alias ("default_handler")));;
void (* const g_p_fn_vectors[])() __attribute__((section(".vectors")))=
{
	(void (* const)())((unsigned long)stack_top+sizeof(stack_top)),
	&reset_handler,
	&NMI_Handler,
	&H_Fault_Handler,
	&MM_Fault_Handler,
	&Bus_Fault_Handler,
	&Usage_Fault_Handler,
};