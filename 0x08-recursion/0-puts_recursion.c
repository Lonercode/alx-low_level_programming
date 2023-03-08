#include "main.h"
/**
 * _puts_recursion - Print string with recusrion
 * @s: input
 *
 * Return: Nothing.
 */
void stringy(char *s);

void _puts_recursion(char *s)
{
stringy(s);
_putchar('\n');
}

/**
 * stringy - Get string with recursion
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
