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

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0' && j < n)
{
dest[i] = src[j];
j++;
i++;
}
return (dest);
}
