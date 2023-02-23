#include "main.h"

/**
 * print_triangle - Print a triangle pattern
 * @size: input 1
 * @i: input 2
 * @j: input 3
 * Return: Nothing
 */
void print_triangle(int size)
{
int i;
int j;
if (n > 0)
{
for(i = 0; i < n; i++)
{     
for (j = 0; j < n; j++)
{            
if(j < n-i-1)
{
putchar(' ');
} 
else 
{
putchar('#');
}
}        
putchar('\n');
}
}
else
{
putchar('\n');
}
}
