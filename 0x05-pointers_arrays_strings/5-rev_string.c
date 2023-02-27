#include "main.h"
/**
 * rev_string - String in reverse
 * @s: input string
 * Return: Nothing
 */
void rev_string(char *s)
{
int i = 0;
int j;
while (s[i] != '\0')
{
i++;
}
for (j = 0; j < i; j++)
{
_putchar(s[j]);
}
_putchar('\n');
for (j = i - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
