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
while (str[i] != '\0')
{
i++;
}
for (j = 0; j < i; j++)
{
if (j % 2 == 0)
{
_putchar(str[j]);
}
else
{
continue;
}
}
_putchar('\n');
}
