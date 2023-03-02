#include "main.h"
/**
 * _strcmp - Compare two strings 
 * @s1: input 1
 * @s2: input 2
 * Return: Result of comparison
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int j;
int k;

while (s1[i] != '\0')
{
i++;
}
for (j = 0; j < i; j++)
{
if (s1[j] == s2[j] && i == j + 1)
{
return (0);
}
}
for (k = 0; k < i; k++)
{
if ((s1[k] != s2[k]) && (s1[k] > s2[k]))
{
return (1);
}
else if ((s1[k] != s2[k]) && (s1[k] < s2[k]))
{
return (-1);
}
}
}
