#include "main.h"
/**
 * _memset - memset function
 * @s:input
 * @b:input
 * @n:input
 * Return: String
 */

char *_memset(char *s, char b, unsigned int n)
{
    int i;
    int j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; j < n; j++)
        {
            s[j] = b;
        }
    }
    return (s);
}
