#include "main.h"
/**
 * print_line - Print a line whose length depends on the variable n
 *@n:input
 * Return: Nothing
 */
int print_line(int n)
{
int i;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
_putchar('_');
}
_putchar("\n");
}
else
{
_putchar("\n");
}
}
