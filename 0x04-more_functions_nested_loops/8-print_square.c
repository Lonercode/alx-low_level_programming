#include "main.h"
/**
 * print_square - Prints a square whose dimension depends on the value size
 *@size:input
 *@i:input
 *@j:input
 *@m:input
 * Return: Nothing
 */
void print_square(int size)
{
int i;
int j;
int m = size * 2;
if (size > 0)
{ 
for (j = size; j < m; j++)
{
for (i = 1; i <= n; i++)
{
_putchar('#');        
}
_putchar('\n');
}    
}
else
{
  putchar('\n');
}
}
