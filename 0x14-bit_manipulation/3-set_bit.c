#include "main.h"

/**
 * set_bit - sets bit value to 1
 * @n: input
 * @index: input
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int l;

	if (index > 64)
		return (-1);

	for (l = 1; index > 0; index--, l *= 2)
		;
	*n += l;

	return (1);
}
