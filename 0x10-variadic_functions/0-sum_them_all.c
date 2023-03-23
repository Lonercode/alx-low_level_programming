#include <stdarg.h>
#include "variadic_functions.h"
 
/**
 * sum_them_all - Summing numbers
 * @n: input
 *
 * Return: varies
 */
int sum_them_all(const insigned int n, ...)
{
	if (n != 0)
{
    int sum = 0;
 
    va_list ptr;
 
    va_start(ptr, n);
 
    for (int i = 0; i < n; i++)
	{
        Sum += va_arg(ptr, int);
	}
    va_end(ptr);
 
    return (sum);
}
if (n == 0)
{
	return (0);
}
}
