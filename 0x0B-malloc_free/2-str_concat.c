#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - str_concat
 * @s1: input
 * @s2: input
 * Return: Result
 */
char *str_concat(char *s1, char *s2)
{
	int end1, end2, i = 0;
	char *str;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	for (end1 = 0; end1 <= *s1; end1++)
	{
	}

	for (end2 = 0; end2 <= *s2; end2++)
	{
	}

	str = malloc(sizeof(char) * (end1 + end2 + 1));

	if (str == NULL)
		return (NULL);

	while (*s1)
	{
		str[i] = *s1;
		i++;
		s1++;
	}

	while (*s2)
	{
		str[i] = *s2;
		i++;
		s2++;
	}
	return (str);
}
