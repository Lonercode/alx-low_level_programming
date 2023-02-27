#include "main.h"
/**
 * _puts - Print string to stdout
 * @str: input string
 * Return: Nothing
 */
void _puts(char *str)
{
int i;
while (str[i] != '\0')
{
i++;
}
for (j = 0; j <= i; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
