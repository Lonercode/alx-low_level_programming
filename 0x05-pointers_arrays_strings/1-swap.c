#include "main.h"
/**
 * swap_int - Swap integers
 * @a: input 1
 * @b: input 2
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	*a = &a;
	*b = &b;
	*a = b;
	*b = a;


}
