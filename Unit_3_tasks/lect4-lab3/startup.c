//eng.Yassa
#include<stdint.h>

extern int main(void);

void Reset_Handler();

void Default_Handler()
{
	Reset_Handler ();
}

void NMI_Handler() __attribute__((weak, alias("Default_Handler")));;
void H_Fault_Handler()  __attribute__((weak, alias("Default_Handler")));;


static unsigned long stack_top[256]; //reserve stack size 256 *4 = 1024 Byte

//( __attribute__) to move vectors from .data to .text in flash.
void ( * const g_p_fn_vectors[])() __attribute__((section(".vectors"))) =
{
	(void (*)())	((unsigned long)stack_top + sizeof(stack_top)),
	&Reset_Handler,
	&NMI_Handler,
	&H_Fault_Handler
};

extern unsigned int _E_text ;
extern unsigned int _S_DATA ;
extern unsigned int _E_DATA ;
extern unsigned int _S_bss ;
extern unsigned int _E_bss ;

void Reset_Handler()
{
	int i;
	// Copy data section from Flash to RAM
	unsigned int DATA_Size = (unsigned char*)&_E_DATA - (unsigned char*)&_S_DATA ;        /* We handling with address so we add & before it 
	                                                                                          bc its variable not symbol and Casting into char to copy byte by byte */ 
	unsigned char* P_src =  (unsigned char*)&_E_text ;                                    /* Pointer point to source which is started copy from this address */
	unsigned char* P_dst =  (unsigned char*)&_S_DATA ;                                   /* Pointer point to distenation which is ended copy in this address */
	
	for(i=0 ; i < DATA_Size ; i++ )
	{
		*((unsigned char*) P_dst++) = *((unsigned char*)P_src++) ;                       /* Copy Data from value of pointer source to value of pointer distenation */
	}
	
	// init .bss section in SRAM = 0 
	unsigned int Bss_Size = (unsigned char*)&_E_bss - (unsigned char*)&_S_bss ;
	P_dst = (unsigned char*)&P_src ;   
	
	for(i=0 ; i < Bss_Size ; i++ )
	{
		*((unsigned char*)P_dst++) = (unsigned char)0 ;                              // initialize Var in bss equal to Zero
	}
	
	// Jump to main ()
	
	main () ;
}