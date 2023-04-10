#include "main.h"
#include <stdio.h>
/**
 * clear_bit - set bit val
 * @n: input
 * @index: input
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int j;

	if (index > 64)
		return (-1);
	j = index;
	for (i = 1; j > 0; i *= 2, j--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
