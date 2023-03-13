#include <stdlib.h>
#include "main.h"
/**
 * _strdup - strdup
 * @str: input
 * Return: Result
 */
char *_strdup(char *str)
{
	char *array;
	int i, len;

	array = malloc(sizeof(str));

	i = len = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	if (array == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		array[i] = str[i];
		i++;
	}

	return (array);
}

