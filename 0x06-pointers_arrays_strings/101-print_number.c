#include "main.h"
/**
 * print_number - print numbers.
 * @n: input
 * Return: Nothing
 */
void print_number(int n)
{
int i, j, k, l, p;
unsigned int t, m, o;

k = 0;
if (n < 0)
{
_putchar('-');
t = -n;
}
else
{
t = n;
}
o = t;
while (o >= 10)
{
o = o / 10;
k++;
}
l = k + 1;
p = 1;
i = 1;
while (i < l)
{
p = p * 10;
i++;
}
j = p;
while (j >= 1)
{
m = (t / j) % 10;
_putchar(m + '0');
j = j / 10;
}
}
