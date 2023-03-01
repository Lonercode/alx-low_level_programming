#include "main.h"
/**
 * _strncat - Concatenates two strings with n
 * @dest: input 1
 * @src: input 2
 * Return: Result of concatenation 
 */
char *_strncat(char *dest, char *src, int n)
{
    int i = 0;
    int j = 0;
    int k;
    int l;
    int m;

    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';
    for (m = 0; m < i; m++)
    {
    putchar(dest[m]);
    }
    for (l = 0; l < n; l++)
    {
    if (l >= j)
    {
        for (m = 0; m < i; m++)
        {
        _putchar(src[j]);
        }
    }
    else
    {
        _putchar(src[l]);
    }
    }
    return (0);
}
