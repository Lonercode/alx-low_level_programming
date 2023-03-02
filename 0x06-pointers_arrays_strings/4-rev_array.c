#include "main.h"
/**
 * reverse_array - Reverse Array
 * @a: input 1
 * @n: input 2
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
int it; 
int i;
for (i = n - 1; i > n / 2; i--)
{
it = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = it;
}
}
