#include "main.h"
/**
 *cap_string - Capitalizes a string
 *@str: input 1
 *
 *Return: Result
 */
char *cap_string(char *str)
{
int i = 0;
int j;
int s[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

while (*(str + i) != '\0')
{
if (*(str + i) >= 'a' && *(str + i) <= 'z')
{
if (i == 0)
{
*(str + i) = *(str + i) - 32;
}
else
{
for (j = 0; j <= 12; j++)
{
if (s[j] == *(str + i - 1))
{
*(str + i) = *(str + i) - 32;
}
}
}
}
i++;
}
return (str);
}
