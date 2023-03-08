#include "main.h"
/**
 * factorial - Factorial with recursion
 * @n: input
 * 
 * Return: Factorial of Number
 */

int factorial(int n)
{
if (n >= 1)
{
return(n * factorial(n - 1));
}
else
{
return (-1);
}
}
