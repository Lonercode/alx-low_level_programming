#include "main.h"
/**
 * infinite_add - add two numbers
 * @n1: input 1
 * @n2: input 2
 * @r: input 3
 * @size_r: input 4
 * Return: Result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num, t = 0;

	for (; *n1 && *n2; n1--, n2--, size_r--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += t;
		*(r + size_r) = (num % 10) + '0';
		t = num / 10;
	}

	for (; *n1; n1--; size_r++)
	{
		num = *(n1 - '0') + t;
		*(r + size_r) = (num % 10) + '0';
		t = num / 10;
	}

	for (; *n2; n2--;  size_r--)
	{
		num = (*n2 - '0') + t;
		*(r + size_r) = (num % 10) + '0';
		t = num / 10;
	}

}
