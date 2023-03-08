#include "main.h"
/**
 * _puts_recursion - Print string with recusrion
 * @s: input
 * 
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
    stringy(s);
    _putchar('\n');
}

/**
 * stringy - Grt string with recursion
 * @s: input
 * 
 * Return: Nothing.
 */

void stringy(char *s)
{
    if (*s != '\0')
    {
        _putchar(*s);
        stringy(s + 1);
    }
}
