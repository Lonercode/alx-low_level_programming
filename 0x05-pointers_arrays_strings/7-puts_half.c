#include "main.h"
/**
 * puts_half - Print second half of a string
 * @str: Input
 * Return: Nothing
 */
void puts_half(char *str)
{
int i = 0;
int j;
int n;
while (str[i] != '\0')
{
i++;
}
if (i % 2 == 0)
{
for (j = (i + 1) / 2; j < i; j++)
{
_putchar(str[j]);
}
}
else if (i % 2 != 0)
{	
for (n = i / 2; n < i; n++)
{
_putchar(str[n]);
}
}
_putchar('\n');
}
