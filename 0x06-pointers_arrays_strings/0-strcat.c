#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: input 1
 * @src: input 2
 * Return: Result of concatenation
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

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
return (dest);
}
