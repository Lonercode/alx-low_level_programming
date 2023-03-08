#include "main.h"
/**
 * _strlen__recursion - string length with recursion
 * @s: input
 *
 * Return: Length of string
 */
int length(char *s);

int _strlen_recursion(char *s)
{
length(s);
}

/**
 * length - Get string length with recursion
 * @s: input
 *
 * Return: Length
 */

int length(char *s)
{
int l = 0;
if (*s != '\0')
{
l++;
length(++s);
return(l);
}
else
{
return(l);
}
}
