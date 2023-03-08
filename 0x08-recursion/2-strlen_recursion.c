#include "main.h"
/**
 * _strlen_recursion - string length with recursion
 * @s: input
 *
 * Return: Length of string
 */
int length(char *s);

int _strlen_recursion(char *s)
{
int l = 0;
length(s);
return (0);
}

/**
 * length - Get string length with recursion
 * @s: input
 *
 * Return: Length
 */

int length(char *s)
{
static int l=0;
if(*s!='\0')
{
l++;
length(++s);
}
else
{
return (l);
}
}
