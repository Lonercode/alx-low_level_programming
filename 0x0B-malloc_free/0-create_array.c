#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - create array
 *@size: input
 *@c: input
 *
 * Return: Something
 */
char *create_array(unsigned int size, char c)
{
	char *str;
        unsigned int i;

	if (size != 0 || str != NULL)
	{

	str = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
	}
	else
	{
	return (NULL);
	}
}

