#include "main.h"
#include <stdio.h>
/**
 * get_bit - value of bit at index
 * @n: input
 * @index: input
 * 
 * Return: Value of bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int j;

	if (index > 64)
		return (-1);

	j = n >> index;

	return (j & 1);
}
