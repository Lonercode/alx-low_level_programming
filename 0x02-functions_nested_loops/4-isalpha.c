#include "main.h"
/**
 * _isalpha - Determine if an alphabet
 *@c: input
 * Return: 0 or 1 (Depending on result)
 */
int _isalpha(int c)
{
if (( c >= 'a' && c <= 'z') || ( c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
