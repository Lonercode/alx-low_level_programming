#include "main.h"
/**
 * reverse_array - Reverse Array
 * @a: input 1
 * @n: input 2
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
int l;

for (l = n-1; l >=0; l--)
{
if (a[l] != a[0])
{
_putchar((a[l] % 10) + '0');
_putchar(',');
_putchar(' ');
}
else
{
_putchar((a[l] % 10) + '0');
}
}
}
