#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - binary to unsigned int
 * @b: input
 * Return: converted
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int t, p;
	int l;

	if (b == NULL)
		return (0);

	for (l = 0; b[l]; l++)
	{
		if (b[l] != '0' && b[l] != '1')
			return (0);
	}

	for (p = 1, t = 0, l--; l >= 0; l--, p *= 2)
	{
		if (b[l] == '1')
			t += p;
	}

	return (t);
}
