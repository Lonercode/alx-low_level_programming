#include "main.h"
#include <stdio.h>

/**
 * print_binary - binary of a number
 * @n: input
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	int s;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (i = n, s = 0; (i >>= 1) > 0; s++);

	for (; s >= 0; s--)
	{
		if ((n >> s) & 1)
			printf("1");
		else
			printf("0");
	}
}
