#include "main.h"
/**
  * _strchr - Find character in string
  * @s: input
  * @c: input
  *
  * Return: Result
  */
char *_strchr(char *s, char c)
{
	int i = 0
	int j;

	while (s[i])
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		if (c == s[i])
		{
			s += j;
			return (s);
		}
	}

	return ('\0');
}
