#include "main.h"
/**
 * _strchr - Find a character in a string
 * @s: input
 * @c: input
 * Return: Result
 */
char *_strchr(char *s, char c)
{
int i = 0;
int j;

while (s[i] != '\0')
{
    i++;
}

for (j = 0; j < i; j++)
{
    if (s[j] == c)
    {
        return (s[j]);
    }
}
}
