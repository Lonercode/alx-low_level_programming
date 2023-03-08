#include "main.h"
/**
 * factorial - Print string with recusrion
 * @n: input
 * 
 * Return: Factorial of number.
 */
long int fact(int n);

int factorial(int n)
{
return (fact(n));
}

/**
 * fact - Factorial with recursion
 * @n: input
 * 
 * Return: Factorial of Number
 */

long int fact(int n)
{
if (n >= 0)
{
return(n * fact(n - 1));
}
else
{
return (-1);
}
}
