#include <stdio.h>
#include "main.h"
/**
 * print_array - Print array
 * @a: Input array
 * @n: Input integer
 * Return: Nothing
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (a[i] != a[n - 1])
{
printf("%d, ", a[i]);
}
else
{
printf("%d", a[i]);
}
}
printf("\n");
}
