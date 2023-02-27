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
int k;
char *t;
char u;
while (s[i] != '\0')
{
i++;
}
for (k = 0; k < i; k++)
{
t++;
}
for (j = 0; j < (i / 2); j++)
{
u = s[j];
s[j] = *t;
*t = u;
t--
}
}
