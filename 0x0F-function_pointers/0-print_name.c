#include "function_pointers.h"

/** print_name - Print a name
 * @name: input
 * @f: function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
