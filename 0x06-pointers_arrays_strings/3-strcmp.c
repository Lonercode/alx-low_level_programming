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
int j = 0;

while (1)
{
if (s1[i] == '\0' && s2[i] == '\0')
{
break;
}
else if (s1[i] == '\0')
{
j = s2[i];
break;
}
else if (s2[i] == '\0')
{
j = s1[i];
break;
}
else if (s1[i] != s2[i])
{
j = s1[i] - s2[i];
break;
}
else
{
i++;
}
}
return (j);
}
