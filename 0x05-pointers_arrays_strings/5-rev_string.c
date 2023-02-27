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
for (j = i - 1; j >= 0; j--)
{
s[j];
}
_putchar('\n');
}
