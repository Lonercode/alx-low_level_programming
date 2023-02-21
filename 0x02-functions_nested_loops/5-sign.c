#include "main.h"
/**
 * print_sign - Link sign depending on number
 *@n: input
 * Return: 0 or 1 (Depending on result)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
