#include "main.h"
/**
 * reverse_array - Concatenates two strings
 * @a: input 1
 * @n: input 2
 * Return: Result of concatenation
 */
void reverse_array(int *a, int n)
{
int l;

for (l = n-1; l >=0; l--)
{
if (array[l] != array[0])
{
_putchar((array[l] % 10) + '0');
_putchar(',');
}
else
{
_putchar((array[l] % 10) + '0');
}
}
}
