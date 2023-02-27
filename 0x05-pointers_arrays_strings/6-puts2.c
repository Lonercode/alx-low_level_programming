#include "main.h"
/**
 * puts2 - Print every other character
 * @str: Input
 * Return: Nothing
 */
void puts2(char *str)
{
int i = 0;
int j;
while (s[i] != '\0')
{
i++;
}
for (j = 0; j < i; j++)
{
if (i % 2 == 0)
{
continue;
}
else
{
_putchar(s[j]);
}
}
}
