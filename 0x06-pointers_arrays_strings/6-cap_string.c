#include "main.h"
/**
 * cap_string - Capitalizes a string
 * @str: input 1
 * Return: Result
 */
char *cap_string(char *str)
{
int i = 0;
int j;

while (str[i] != '\0')
{
i++;
}
for (j = 0; j < i; j++)
{
if ((str[j] == 32) || (str[j] == 9) || (str[j] == 10) || (str[j] == 44) || (str[j] == 59) || (str[j] == 46) || (str[j] == 33) || (str[j] == 63) || (str[j] == 34) || (str[j] == 40) || (str[j] == 41) || (str[j] == 123) || (str[j] == 125))
{
if ((str[j + 1] >= 97) && (str[j + 1] <=122))
{
str[j + 1] = str[j + 1] - 32;
}
}
}
return (str);
}
