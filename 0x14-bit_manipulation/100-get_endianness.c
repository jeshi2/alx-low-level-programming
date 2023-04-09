#include <stdio.h>
#include "main.h"

int get_endianness(void)
{
	unsigned int i = 1;
	char *j = (char *) &i; /* create char j pointer to memory addr of j */

	if (*j)
		return (1);	
	return (2);
}

/* the funct work cayes when j is rep in memoer the least sign byte is stored at the lowest w memory addr 
//and most byt store at hig mem
//we access the 1st byte by j, we check weather least sign byte of j is stored at lowest mem */

