#include "main.h"
/**
 * print_last_digit - Print last digit
 *@d: input
 * Return: Nothing
 */
int print_last_digit(int d)
{
if (d < 0)
{
d = (d % 10) * -1;
}
_putchar((d % 10) + '0');
return (d % 10);
}
