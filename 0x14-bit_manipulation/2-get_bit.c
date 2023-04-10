#include "main.h"
#include <stdio.h>
/**
 * get_bit - bit value
 * @n: input
 * @index: index
 * Return: bit value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int x;

	if (index > 64)
		return (-1);

	x = n >> index;

	return (x & 1);
}
