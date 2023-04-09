#include <stdio.h>
#include "main.h"

void print_binary(unsigned long int n)
{
	/**
	 * we define 2 var i that will used as loop counter, old to store the curr bit examined
	 * count varr used to keep track of num of binr dgt that hv been printed
	 */
	unsigned long int old;
	int i;
       	int take = 0;
	
	/*
	 * print binr rep of n by lopping through each bit in n start in 63 and working downwrd
	 * cur var use 2 extract val of cur bit examined by >> n by bit
	 * */
	for (i = 63; i >= 0; i--)
	{
		old = n >> i;
		if(old & 1){ /* & determined wetha bit set or not if set funct print and inceement conut var */
			/* if not print 0 */
			_putchar('1'); 
			take++;
		}
		else if(take) _putchar('0');
	}
	if(!take) _putchar('0');
}

