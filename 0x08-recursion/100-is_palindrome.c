#include "main.h"
/**
 * is_palindrome - Palindrome or not?
 * @s: input
 * @i: input
 *Return: yes or no.
 */

int palindrome(char *s, int i);
int _strlen(char *s);

int is_palindrome(char *s)
{
int i = 0;
return (palindrome(s, i));
}

/**
 * _strlen - String length
 * @s: input
 *Return: length
 */

int _strlen(char *s)
{
int l = 0;
if (*s != '\0')
{
l++;
return (_strlen(s + 1) + l);
}
return (l);
}

/**
 * palindrome - Palindrome or not?
 * @s: input
 * @i: input
 *Return: yes or no.
 */

int palindrome(char *s, int i)
{
int len = _strlen(s) - (i + 1);
if (s[i] == s[len])
{
if (i + 1 == len || i == len)
{
return (1);
}
palindrom(s, i + 1);
}
else
{
return (0);
}
}
