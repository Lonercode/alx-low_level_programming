#include "main.h"
/**
 * more_numbers - Prints the numbers 1 - 14 ten times followed by a new line
 *
 * Return: Nothing
 */
void more_numbers(void)
{
int i,j = 0;
while (j <= 9)
{
while (i <= 14)
{
if (i > 9)
 	_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
i++;
}
_putchar('\n');
j++;
i = 0;
}
}
