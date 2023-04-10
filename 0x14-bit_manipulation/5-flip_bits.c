#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Number conversion by flipping bits
 * @n: input
 * @m: input
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int l;
	int count;

	l = n ^ m;
	count = 0;

	while (l)
	{
		count++;
		l &= (l - 1);
	}

	return (count);
}

