#include "main.h"
/**
 * print_diagonal - Prints a diagonal line whose length depends on the value n
 *@n:input
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
int i;
int j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (j == i)
_putchar('\\');
else
_putchar(' ');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
