#include <stdio.h>
#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* xor is calc as n and m thus set @ bit to 1 if bit inn m ar in diff pos */
	int i, bit = 0;
	unsigned long int current;
	unsigned long int xor = n ^ m;
	
	while (xor)
	{
		bit += xor & 1;
		xor >>= 1;
	}
	return (bit);
	
	/* loop run 63 to 0 since input singed to long 64bit */
	for (i = 63; i >= 0; i--) /* check lest signfcnt bit cur is set to 1; indicate cor bit in n needs to be flippeed */
	{
		current = xor >> i; /* the loop set cur to val xor shifted to right by bits */
		if (current & 1)
			bit++; /* if bit is need to incree we increse the value */
	}

	return (bit);
}

