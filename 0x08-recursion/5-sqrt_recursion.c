#include "main.h"
/**
*_sqrt_recursion - square root
*@n: input
*Return: square root
*/
int square(int n, int y);

int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 *square - square root
 *@n: input
 *@y: input
 *
 *Return: square root
 */
int square(int n, int y)
{
if (y * y == n)
{
return (y);
}
else if (y * y > n)
{
return (-1);
}
return (square(n, y + 1));
}
