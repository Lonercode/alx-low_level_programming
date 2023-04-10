#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that flips bits to convert one number to another number
 * @n: input
 * @m: input
 * 
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int count;

	i = n ^ m;
	count = 0;

	while (i)
	{
		count++;
		i &= (i - 1);
	}

	return (count);
}
