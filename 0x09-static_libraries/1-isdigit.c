#include "main.h"
/**
 * _isdigit - Checks if a character is a digit (1 - 9)
 *@c:input
 * Return: 0 or 1 (Depending on the result)
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
