#include "function_pointers.h"

/**
 * print_name - print a name.
 * @name: input name.
 * @f: function pointer.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
