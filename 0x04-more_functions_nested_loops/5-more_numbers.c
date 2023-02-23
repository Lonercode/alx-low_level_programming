#include "main.h"
/**
 * more_numbers - Print numbers 1-14 ten times
 * Return: nothing
 */
void more_numbers(void)
{
	int i;
	int j = 0;

	for (i = 0 ; i < 10 ; i++)
	{
		while (j < 15)
		{
			if (j > 9)
				_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			j++;
		}
		j = 0;
		_putchar('\n');
	}
}

