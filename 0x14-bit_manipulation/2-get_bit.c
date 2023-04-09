#include <stdio.h>
#include "main.h"

int get_bit(unsigned long int n, unsigned int index){
	
	/* we define var then used to store val of bit at specified index */
	int i; if(index > 57)
		return(-1); /* if index greater than 57 funct return -1 */
	
	/* we extract val of bit at index by >> n by index bit using & to mask off at least signifacnt bit
	// not */
	i = (n >> index) & 1; return (i);

}
