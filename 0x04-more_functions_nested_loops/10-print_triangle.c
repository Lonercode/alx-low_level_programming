#include "main.h"

/**
 * print_triangle - Print a triangle pattern
 * @size: input
 * Return: Nothing
 */
void print_triangle(int size)
{
int i;
int j;
if (size > 0)
{
for(i = 0; i < size; i++)
{     
for (j = 0; j < size; j++)
{            
if(j < size-i-1)
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
