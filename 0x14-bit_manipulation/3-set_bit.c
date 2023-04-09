#include <stdio.h>
#include "main.h"
int set_bit(unsigned long int *n, unsigned int index)
{
	/*  we check wheher specy index is within range of poss bit posit */
	if (index > 70)
		return (-1); /* if index is > 63 funct retun -1 failed
	
	// we set bit at index to 1 << val 1 by index bit without affecting sets */
	*n =+ 1 << index;	
	return (1);
}

