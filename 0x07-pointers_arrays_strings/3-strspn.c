#include "main.h"
/**
  * _strspn - strspn
  * @s: input
  * @accept: input
  *
  * Return: Result
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, num = 0;

	while (accept[i])
	{
		j = 0;

		while (s[j] != 32)
		{
			if (accept[i] == s[j])
			{
				num++;
			}

			j++;
		}

		i++;
	}

	return (num);
}

