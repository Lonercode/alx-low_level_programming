#include "main.h"
/**
 * factorial - Factorial with recursion
 * @n: input
 *
 * Return: Factorial of Number
 */

int factorial(int n)
{
if (n > 0)
{
return (n * factorial(n - 1));
}
else if (n == 0)
{
return (1);
}
else
{
return (-1);
}
}
