#include "main.h"
/**
 * _strncpy - Copy characters
 * @dest: input 1
 * @src: input 2
 * @n: input 3
 * Return: Result
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;
    int j = 0;

    while (dest[j] != '\0')
    {
        j++;
    }
    
    for (i = 0; src[i] != '\0' && i < n; i++)
    {
        dest[i] = src[i];
    }
    return (dest);
}
