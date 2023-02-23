#include "main.h"
/**
 * print_square - Prints a square whose dimension depends on the value size
 *@size:input
 * Return: Nothing
 */
void print_square(int size)
{
	int h, w;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (h = size ; h > 0 ; h--)
	{
		for (w = size ; w > 0 ; w--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

