#include "function_pointers.h"
/** print_name - Print a name
 * @name: input
 * @f: input
 * @char: input
 *
 * Return: Nothing
 */
void f(char *name)
{
	int i = 0;
        int j;
        while (name[i] != '\0')
        {
                i++;
        }
        for (j = 0; j < i; j++)
        {
        _putchar("%c", name[j]);
        }
}
void print_name(char *name, void (*f)(char *))
{
	void (*f)(char *) = &f;

        (*f)(name);
	return (0);
}
