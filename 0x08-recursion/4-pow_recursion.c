#include "main.h"
/**
 * _pow_recursion - Print power with recusrion
 * @x: input
 * @y: input
 * 
 * Return: Power Result.
 */
int power(int x, int y);

int _pow_recursion(int x, int y)
{
return (power(x, y));
}

/**
 * power - Power result.
 * @x: input
 * @y: input
 * 
 * Return: Power Result.
 */

int power(int x, int y)
{
if (y > 0)
{
return(x * power(x, y - 1));
}
else
{
return (-1);
}
}
