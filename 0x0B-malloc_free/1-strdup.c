#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - strdup
 * @str: input
 * Return: 0
 */
char *_strdup(char *str)
{
	int i, end;
	char *arr;

	if (str == NULL)
		return (NULL);

	for (end = 0; end <= *str; end++)
	{
	}

	end += 1;
	arr = malloc(sizeof(char) * end);

	for (i = 0; i < end; i++)
		arr[i] = str[i];

	if (arr  == NULL)
		return (NULL);
	return (arr);
}
