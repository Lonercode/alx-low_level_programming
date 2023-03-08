#include "main.h"
/**
 * _print_rev_recursion - Print string with recusrion
 * @s: input
 * 
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
    reverse(s);
    _putchar('\n');
}

/**
 * reverse - Get string with recursion
 * @s: input
 * 
 * Return: Nothing.
 */

void reverse(char *s)
{
    if (*s)
    {
        stringy(s + 1);
       _putchar(*s);
    }
}
