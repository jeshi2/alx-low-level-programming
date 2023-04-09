#include <stdio.h>
#include "main.h"
#include <string.h>

unsigned int binary_to_uint( const char *b)
{
	unsigned int j = 0; /* defines the function & speciefies it takes single aguments */
	int i;			/* i will be used as a loop counter j will wil hold decimal equivalent binary str */
	for (i = 0; b[i]; i++){
		if (b[i] < '0' || b[i] > '1')
			return (0); /* check wether null != return 0 indicate no binary was provided */
		j = 2 * j + (b[i] - '0'); /* convert binr 2 unsigned int. loop inerates over each char of str until terminated null char*/
		/*  indicate that input str != valid bir str
		// j accumulate dec of binr str @ binr dgt * correspond pwr of 2 & added to accumaleted value
		// This is done by * current valu of dec and adding binary digt by sub asci valu */
	}

	return (j);
}
