#include "main.h"
#include <stdlib.h>
/**
 * _strdup - strdup
 * @str: input
 * Return: 0
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	arr = malloc(sizeof(char) * (len + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}
	arr[len] = '\0';
	return (arr);
}
