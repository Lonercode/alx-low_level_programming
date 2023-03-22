#include "function_pointers.h"
/** f - Print a name
 * @name: input
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

/** print_name - Print a name
 * @name: input
 * @f: input
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	void (*f)(char *) = &f;

        (*f)(name);
}
