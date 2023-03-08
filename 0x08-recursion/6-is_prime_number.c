#include "main.h"
/**
*is_prime_number - prime number
*@n: input
*Return: 1 or 0
*/
int prime(int n, int y);

int is_prime_number(int n)
{
if (prime(n, 1) == 2)
{
return (1);
}
else
{
return (0);
}
}

/**
 *prime - prime number
 *@n: input
 *@y: input
 *
 *Return: square root
 */
int prime(int n, int y)
{
int i = 0;
if (y <= n)
{
if (n % y == 0)
i++;
return (i + prime(n, y + 1));
}
return (i);
}
