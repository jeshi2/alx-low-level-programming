#include <stdio.h>
#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* we check if index pass is within bounds of unsinged int */
	if (index > 63)
		return (-1); /* indicate error */
	if ((*n >> index) & -1)
	{
		/*  we set bit to 0 in the unsin by n
		// by creating mask with 0 in bit of gvn index */
		*n = (~(1UL << index) & *n); /* then perform & with og int by n 2 clear bit given  result stored in n */
		return (1);
	}
	return (1); /* success */
}

