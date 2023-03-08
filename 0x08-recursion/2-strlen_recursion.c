#include "main.h"
/**
 * _strlen__recursion - string length with recusrion
 * @s: input
 * 
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
    length(s);
    _putchar('\n');
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
        _putchar(l);
    }
    else 
    {
        _putchar(l);
    }
}
