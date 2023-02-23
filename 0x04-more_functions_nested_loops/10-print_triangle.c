#include "main.h"

/**
 * print_triangle - Print a triangle pattern
 * @size: input
 * Return: Nothing
 */
void print_triangle(int size)
{
	int x, y = 0;
	int z;

	if (size > 0)
	{
		while (y < size)
		{
			z = size - y - 1;
			while (x < size)
			{
				if (z > x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				x++;
			}
			y++;
			x = 0;
			_putchar ('\n');
		}
	}
	else
		_putchar('\n');
}
