#include "main.h"
/**
  * _memcpy - copy
  * @dest: dest input
  * @src: source input
  * @n: input
  *
  * Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
