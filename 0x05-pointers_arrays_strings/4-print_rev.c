#include "main.h"
/**
 * print_rev - Print string to stdout
 * @s: input string
 * Return: Nothing
 */
void print_rev(char *s)
{
int i = 0;
int j;
while (str[i] != '\0')
{
i++;
}
for (j = i; j > 0; j--)
{
_putchar(str[j]);
}
_putchar('\n');
}
