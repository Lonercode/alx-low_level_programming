#include "main.h"
/**
 * _strlen - Print string length
 * @s: input
 * Return: Length
 */
int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}
